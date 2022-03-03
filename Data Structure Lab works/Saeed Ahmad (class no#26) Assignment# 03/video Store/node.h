#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include"videoType.h"

//Definition of the node
template <typename Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};

#endif // NODE_H_INCLUDED

