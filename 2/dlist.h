/**************
	Kaylee Poole
	3/19/17
	Double linked list class
***************/

#include"dnode.h"
#ifndef DLIST_H
#define DLIST_H
template<class T> class dnode_iterator;
template <class T>
class dlist{
	public:
		typedef dnode_iterator<T> iterator;
		dlist(dnode<T> *h=NULL, dnode<T> *t=NULL); //constructor
		~dlist(); //destructor
		dlist(const dlist<T>& other); //copy constructor
		dlist& operator=(const dlist<T>& other); //assignment operator 
		void front_insert(T& item); //adds data item to front of list
		void rear_insert(T& item); //adds data item to end of list
		void front_remove(); //removes first item from the list
		void rear_remove(); //remove last item from the list
		void show(); //outputs list
		int size(); //returns the number of items in the list
		void reverse_show(); //outputs list in reverse order
		void insert_before(dnode_iterator<T>& it, T item); //adds item before iterator 
		void insert_after(dnode_iterator<T>& it, T item); //adds item after iterator
		//iterator functions
		void remove(dnode_iterator<T>& it); //removes item at iterator 
		iterator begin() //sets iterator to beginning of list
			{return iterator(head);}
		iterator r_begin() //sets iterator to end of list
			{return iterator(tail);}
		iterator end() //sets iterator to end of list
			{return iterator(NULL);}
		iterator r_end() //sets iterator to beginning of list
			{return iterator(NULL);}
	private:
		dnode<T> *head, *tail;
};
#include "dlist.template"
#endif

