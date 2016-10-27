#ifndef NODE_H
#define NODE_H

template <class t1, t2>;
class node
{
    public:
        node(node *myParent);
        virtual ~node();
    protected:
    private:
        int nodeHeight;
        node *m_left;
        node *m_right;
        node *m_parent;
};

#endif // NODE_H
