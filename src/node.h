#ifndef NODE_H
#define NODE_H

template <class t1,class t2>
class node
{
    public:
        node(t1 data, t2 number);
        node(node *myParent, t1 data, t2 number);
        virtual ~node();
        t2 getVal();
    protected:
    private:
        int nodeHeight;
        node *m_left;
        node *m_right;
        node *m_parent;
        t1 m_data;
        t2 m_number;
};

#endif // NODE_H
