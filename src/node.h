#ifndef NODE_H
#define NODE_H

template <class t1,class t2>
class node
{
    public:
        node();
        node(node *myParent);
        virtual ~node();
        t2 getVal();
    protected:
    private:
        int nodeHeight;
        node *m_left;
        node *m_right;
        node *m_parent;
};

#endif // NODE_H
