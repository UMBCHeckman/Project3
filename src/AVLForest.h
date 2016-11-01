#ifndef _AVLFOREST_H_
#define _AVLFOREST_H_

#include "tree.h"
#include <vector>
#include <string>
#include <map>


class AVLForest
{
  // vector of trees
  // we use a non-templated base class so we can hold all template instantiations
  std::vector<AVLTreeBase*> myTrees;

  // other data memebers


public:
  AVLForest();
  ~AVLForest();

  void insert(std::string);
  void print_range(std::ostream&, std::string);
  friend std::ostream& operator << (std::ostream&, AVLForest&);

  // other member functions
private:
    //template <class t1, class t2>
    std::map<std::string, std::pair<int,int> > m_forestMap;
    std::map<std::string, int> m_treeBaseMap;
    //map<string,tree*>::iterator string it;
};

#endif /* _AVLFOREST_H_ */
