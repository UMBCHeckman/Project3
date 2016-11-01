#ifndef TREE_H
#define TREE_H
#include "AVLTreeBase.h"
#include "node.h"
#include <vector>
#include <map>

template <class t1,class t2>
class node;

template <class t1,class t2>//, class t3>
class tree: public AVLTreeBase
{
    public:
        tree();//AVLTreeBase::PrintOrder);//,  t3);
        virtual ~tree();
        void insertNode(t1 data, t2 number);//string dataType, string numType);
        void insertNode(node<t1,t2> *tempNode, t1 data, t2 number);
        void setPrintOrder(int temp);
        void setDataType(int temp);
        void setNumberType(int temp);
        int getPrintOrder();
        int getDataType();
        int getNumberType();
    protected:
    private:
        //std::vector<node*> myTree;
        //template <class t1,class t2>
        std::map<std::string, node*> m_treeMap;
        node<t1,t2> *m_root;
        AVLTreeBase::PrintOrder m_printOrder;
        t1 m_dataType;
};

#endif // TREE_H
