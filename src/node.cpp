#include "node.h"

template <class t1, t2>
node<t1,t2>::node(node *myParent)
{
    m_parent = myParent;
    m_left = NULL;
    m_right = NULL;
}

template <class t1, t2>
node<t1,t2>::~node()
{
    //dtor
}
