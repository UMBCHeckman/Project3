#include "node.h"
#include <cstddef>
template <class t1, class t2>
node<t1,t2>::node(t1 data, t2 number)
{
    m_left = NULL;
    m_right = NULL;
    m_data = data;
    m_number = number;
}
template <class t1, class t2>
node<t1,t2>::node(node *myParent, t1 data, t2 number)
{
    m_parent = myParent;
    m_left = NULL;
    m_right = NULL;
    m_data = data;
    m_number = number;
}

template <class t1, class t2>
node<t1,t2>::~node()
{
    //dtor
}
template <class t1, class t2>
t2 node<t1, t2>::getVal()
{
    return m_number;
}
