#include "tree.h"
template <class t1, class t2>// class t3>;
tree<t1,t2>::tree(AVLTreeBase::PrintOrder)//class t1, class t2, class t3)
{
    m_printOrder = PrintOrder;
    m_dataType = t1;
    m_numberType = t2;
}
template <class t1, class t2>
tree<t1,t2>::~tree()
{
    //dtor

template <class t1, t2>
void tree<t1,t2>insertNode(class t1, class t2)//string dataType, string numType)
{
    node<t1,t2> *tempNode = m_root;
    insertNode(tempNode);
}
template <class t1, t2>
void tree<t1,t2>insertNode(node<t1,t2> *tempNode)
{
    if(myTree.size() == 0){//we need a root
        m_root = new node<t1,t2>;
        m_forestMap.insert ( std::pair<string,AVLTreeBase*>(thefirstthing,myTreeBase) );
    }
    else{
        if(t2 > tempNode->getVal())
        {
            if(tempNode->m_right != NULL){
                tempNode = tempNode->m_right;
            }
            else{
                tempNode = tempNode->m_right;
                insertNode();
            }
        }
        else if{
            if(tempNode->m_left != NULL){
                tempNode = tempNode->m_left
            }
            else{
                tempNode = tempNode->m_left;
                insertNode();
            }
        }
    }
}
setPrintOrder(int temp)
{
    m_printOrder = temp;
}
setDataType(int temp)
{
    m_dataType = temp;
}
setNumberType(int temp)
{
    m_numberType = temp;
}
getPrintOrder()
{
    return m_printOrder;
}
getDataType()
{
    return m_dataType;
}
getNumberType()
{
    return m_numberType;
}
