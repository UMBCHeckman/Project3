#ifndef NODE_H
#define NODE_H

template <enum dataType, enum numberType>;
class node
{
    public:
        node();
        virtual ~node();
    protected:
    private:
        int nodeHeight;
        node *m_left;
        node *m_right;
};

#endif // NODE_H
