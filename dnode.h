/**************
	Kaylee Poole
	3/19/17
	Node class
***************/
#ifndef DNODE_H
#define DNODE_H
template <class T>
class dnode{
	public:
		dnode(T d=T(), dnode *p=NULL, dnode *n=NULL) //constructor
			{datafield=d; prev_node=p; next_node=n;}
		dnode* next() //returns next node
			{return next_node;}
		dnode* previous() //returns previous node
			{return prev_node;}
		T data()const //returns current object
			{return datafield;}
		void set_next(dnode *n) //sets next node
			{next_node=n;}
		void set_previous(dnode *p) //set previous node
			{prev_node=p;}
		void set_data(T d) //sets current object
			{datafield=d;}

	private:
		T datafield;
		dnode *next_node, *prev_node;
};

#endif

