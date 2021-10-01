#pragma once
#include <cstddef>
template<class T>
class my_list
{
public:
	class node
	{
	public:
		T data;
		node* next;

		node();
		node(const T& data, node* next);
	};
	class iterator
	{
		node* current;
	public:
		iterator(node* elem);
		bool operator!=(iterator other)const;

		iterator& operator++();

		T& operator*();

	};
	iterator begin();
	iterator end();

	my_list();
	
	void push_back(const T& data);

private:
	node* first_;
	size_t size_;
	node* get_last_node()const;

};


template <class T>
my_list<T>::node::node() : node(0, nullptr)
{}


template <class T>
my_list<T>::iterator::iterator(node* elem) : current(elem)
{}
template <class T>
my_list<T>::node::node(const T& data, node* next) : data(data), next(next)
{}
template <class T>
bool my_list<T>::iterator::operator!=(iterator other) const
{
	return other.current != current;
}

template <class T>
typename my_list<T>::iterator& my_list<T>::iterator::operator++()
{
	current = current->next;
	return *this;
}

template <class T>
T& my_list<T>::iterator::operator*()
{
	return current->data;
}

template <class T>
typename my_list<T>::iterator my_list<T>::begin()
{
	return iterator(first_);
}

template <class T>
typename my_list<T>::iterator my_list<T>::end()
{
	return iterator(nullptr);
}

template <class T>
typename my_list<T>::node* my_list<T>::get_last_node() const
{
	node* result = first_;
	while (result->next != nullptr)
	{
		result = result->next;
	}
	return result;
}

template <class T>
my_list<T>::my_list()
{
	first_ = nullptr;
	size_ = 0;
}

template <class T>
void my_list<T>::push_back(const T& data)
{
	node* new_node = new node(data, nullptr);
	if (first_ == nullptr)
	{
		first_ = new_node;
	}
	else
	{
		get_last_node()->next = new_node;
	}

	++size_;
}