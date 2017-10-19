/**************
	Kaylee Poole
	3/19/17
	External iterator class
***************/
#include"dnode.h"
#include"dlist.h"
#ifndef DNODE_IT_H
#define DNODE_IT_H
template<class T> class dlist;

template <class T>
class dnode_iterator{
	public:
		friend class dlist<T>; 
		dnode_iterator(dnode<T> *it=NULL) //constructor
			{current=it;}
		T operator *()const //* overload
			{return current->data();}
		dnode_iterator& operator ++() //prefix ++ overload
			{current=current->next(); return *this;}
		dnode_iterator& operator ++(int) //postfix ++ overload
			{dnode_iterator orginal(current); current=current->next(); return *this;}
		dnode_iterator& operator --() //prefix -- overload
			{current=current->previous(); return *this;}
		dnode_iterator& operator --(int) //postfix -- overload
			{dnode_iterator orginal(current); current=current->previous(); return *this;}
		bool operator ==(const dnode_iterator other)const //== overload
			{return current==other.current;}
		bool operator !=(const dnode_iterator other)const //!= overload
			{return current!=other.current;}
	private:
		dnode<T> *current;
};

#endif
