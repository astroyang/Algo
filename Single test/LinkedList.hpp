/*
 * SinglyLinkedList.hpp
 *
 *  Created on: Nov 26, 2015
 *      Author: astroy
 */

#ifndef SINGLYLINKEDLIST_HPP_
#define SINGLYLINKEDLIST_HPP_


template <typename T>
class singly_linked_list{
private:
	struct singly_linked_node;
	singly_linked_node* head;
	singly_linked_node* tail;
	int length;
public:
	singly_linked_list<T>();
	int size();
	void clear();
	bool empty();
	void addfront(T elem);
	T front();
	void removefront();
	T kth(int k);
};

singly_linked_list::singly_linked_node<T>{
private:
	T val;
	node* nextnode=nullptr;
	explicit node(T value):val{value} {}
};


#endif /* SINGLYLINKEDLIST_HPP_ */
