#ifndef TREE_H
#define TREE_H
#include "AVLTreeBase.h"

template <class t1,class t2>
class tree
{
    public:
        tree();
        virtual ~tree();
    protected:
    private:
        vector<node*> myTree;
};

#endif // TREE_H
