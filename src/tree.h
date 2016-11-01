#ifndef TREE_H
#define TREE_H
#include "AVLTreeBase.h"
#include "node.h"
#include <vector>
#include <map>

template <class t1,class t2>
class node;

template <class t1,class t2, class t3>
class tree: public AVLTreeBase
{
    public:
        tree( t1,  t2,  t3);
        virtual ~tree();
        void insertNode();//string dataType, string numType);
        void insertNode(node<t1,t2> *tempNode);
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
        std::map<t1, t2> m_treeMap;
        node<t1,t2> *m_root;
        PrintOrder m_printOrder;
        DataType m_dataType;
        NumberType m_numberType;
};

#endif // TREE_H
