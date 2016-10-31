#ifndef TREE_H
#define TREE_H
#include "AVLTreeBase.h"
#include "node.h"
#include <vector>
#include <map>

template <class t1,class t2>
class node;

template <class t1,class t2>
class tree
{
    public:
        tree();
        virtual ~tree();
        void insertNode();
    protected:
    private:
        //std::vector<node*> myTree;
        //template <class t1,class t2>
        std::map<t1, t2> m_treeMap;
        node<t1,t2> *m_root;
};

#endif // TREE_H
