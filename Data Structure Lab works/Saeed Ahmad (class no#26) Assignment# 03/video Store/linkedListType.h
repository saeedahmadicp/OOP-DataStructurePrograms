#ifndef LINKEDLISTTYPE_H_INCLUDED
#define LINKEDLISTTYPE_H_INCLUDED

#include<iostream>
#include"node.h"
template <class Type>
class linkedListIterator
{
public:
    linkedListIterator();
    //Default constructor
    //Postcondition: current = NULL;
    linkedListIterator(nodeType<Type> *ptr);
    //Constructor with a parameter.
    //Postcondition: current = ptr;
    Type operator*();
    //Function to overload the dereferencing operator *.
    //Postcondition: Returns the info contained in the node.
    linkedListIterator<Type> operator++();
    //Overload the preincrement operator.
    //Postcondition: The iterator is advanced to the next node
    bool operator==(const linkedListIterator<Type>& right) const;
    //Overload the equality operator.
    //Postcondition: Returns true if this iterator is equal to
    // the iterator specified by right, otherwise it returns
    // false.
    bool operator!=(const linkedListIterator<Type>& right) const;
    //Overload the not equal to operator.
    //Postcondition: Returns true if this iterator is not equal to
    // the iterator specified by right, otherwise it returns
    // false.
private:
    nodeType<Type> *current; //pointer to point to the current
    //node in the linked list
};

#endif // LINKEDLISTTYPE_H_INCLUDED
