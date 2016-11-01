#ifndef _TREE_CPP
#define _TREE_CPP

#include "tree.h"
template <class t1, class t2>// class t3>;
tree<t1,t2>::tree()//AVLTreeBase::PrintOrder)//class t1, class t2, class t3)
{
    //m_printOrder = PrintOrder;
}
template <class t1, class t2>
tree<t1,t2>::~tree()
{
    //dtor
}
template <class t1, class t2>
void tree<t1,t2>::insertNode(t1 data, t2 number)//string dataType, string numType)
{
    node<t1,t2> *tempNode = m_root;
    tempNode = m_root;
    insertNode(tempNode, data, number);
}
template <class t1, class t2>
void tree<t1,t2>::insertNode(node<t1,t2> *tempNode, t1 data, t2 number)
{
    if(m_myTree.size() == 0){//we need a root
        m_root = new node<t1,t2>;
        m_myTree.push_back(m_root);
        m_treeMap.insert ( std::pair<std::string, int>(data, (m_myTree.size()-1)) );
    }
    else{
        if(number > tempNode->getVal())
        {
            if(tempNode->m_right != NULL){
                tempNode = tempNode->m_right;
            }
            else{
                tempNode = tempNode->m_right;
                insertNode();
            }
        }
        else{
            if(tempNode->m_left != NULL){
                tempNode = tempNode->m_left;
            }
            else{
                tempNode = tempNode->m_left;
                insertNode();
            }
        }
    }
}
//template <class t1, class t2>
//void setPrintOrder(int temp)
//{
//    m_printOrder = temp;
//}
//template <class t1, class t2>
//void tree<t1,t2>setDataType(int temp)
//{
//    m_dataType = temp;
//}
//template <class t1, class t2>
//void setNumberType(int temp)
//{
//    m_numberType = temp;
//}
//template <class t1, class t2>
//int getPrintOrder()
//{
//    return m_printOrder;
//}
#endif
