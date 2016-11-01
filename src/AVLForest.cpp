#include "AVLForest.h"
#include <map>
#include <string>
#include <stdio.h>
#include <sstream>
//#include <cstdlib>
#include <iostream>
#include <cstdlib>


AVLForest::AVLForest()
{
}

AVLForest::~AVLForest()
{
}
void AVLForest::insert(std::string line)
{
  std::vector<std::string> base;
  std::istringstream ss(line);
  std::string strLine;

  while(std::getline(ss, strLine, ','))
  {
      base.push_back(strLine);
  }
    //digest the line into it's components
  if((m_forestMap.find( base[0] )) == m_forestMap.end())/* check if tree not already in vector */
  {
    // create a new tree and add it to the vector
      AVLTreeBase::PrintOrder tempOrder;
      tempOrder = static_cast<AVLTreeBase::PrintOrder>(atoi(base[1].c_str()));
      AVLTreeBase::DataType tempData;
      tempData = static_cast<AVLTreeBase::DataType>(atoi(base[2].c_str()));
      AVLTreeBase::NumberType tempNumber;
      tempNumber = static_cast<AVLTreeBase::NumberType>(atoi(base[3].c_str()));
      //tree *myTreeBase = new tree;
//      myTreeBase->PrintOrder(base[1]);
//      myTreeBase->DataType(base[2]);
//      myTreeBase->NumberType(base[3]);
//      myTrees.push_back(myTreeBase);
//      m_forestMap.insert ( std::pair<std::string,AVLTreeBase*>(base[0],myTreeBase) );
      //AVLTreeBase* b = new tree;
      //my tree has been created but not static casted yet

    if((tempData == 0) && (tempNumber == 0))/* character and integer */
    {
        //tree<char, int> *myTreeBase = new tree<char, int>();
        //myBase->PrintOrder = tempOrder; myBase->DataType = tempData; myBase->NumberType = tempNumber;
        //myTreeBase = static_cast<tree<char, int>*>(myBase);
        //myTreeBase->setPrintOrder(tempOrder); myTreeBase->setDataType(tempData); myTreeBase->setNumberType(tempNumber);
        //This is storage, to put things into the treebase vector it must be a treebase value
        AVLTreeBase *myTreeBase = new tree<char, int>(tempOrder);
        // This is for retrival. If you wanted to preform tree opperations it happens on myTree
        //tree<char,int> *myTree = static_cast<tree<char,int>*>(myTreeBase);

        myTrees.push_back(myTreeBase);
        std::pair<int,int> types; types = std::make_pair (tempData,tempNumber);
        m_forestMap.insert(std::pair<std::string, std::pair<int,int> >(base[0], (types)));
        m_treeBaseMap.insert(std::pair<std::string, int>(base[0], (myTrees.size()-1)));
      //static_cast<myTrees<char, int>*>/* static_cast to <YourAVLTreeClassName<char, int>*> if needed */
    }
    else if((tempData == 0) && (tempNumber == 1))/* character and float */
    {
    /* static_cast to <YourAVLTreeClassName<char, float>*> if needed */
        AVLTreeBase *myTreeBase = new tree<char, float>(tempOrder);
        // This is for retrival. If you wanted to preform tree opperations it happens on myTree
        //tree<char,int> *myTree = static_cast<tree<char,int>*>(myTreeBase);

        myTrees.push_back(myTreeBase);
        std::pair<int,int> types; types = std::make_pair (tempData,tempNumber);
        m_forestMap.insert(std::pair<std::string, std::pair<int,int> >(base[0], (types)));
        m_treeBaseMap.insert(std::pair<std::string, int>(base[0], (myTrees.size()-1)));
    }
    else if((tempData == 1) && (tempNumber == 0))/* string and integer */
    {
      /* static_cast to <YourAVLTreeClassName<std::string, int>*> if needed */
        AVLTreeBase *myTreeBase = new tree<std::string, int>(tempOrder);
        // This is for retrival. If you wanted to preform tree opperations it happens on myTree
        //tree<char,int> *myTree = static_cast<tree<char,int>*>(myTreeBase);

        myTrees.push_back(myTreeBase);
        std::pair<int,int> types; types = std::make_pair (tempData,tempNumber);
        m_forestMap.insert(std::pair<std::string, std::pair<int,int> >(base[0], (types)));
        m_treeBaseMap.insert(std::pair<std::string, int>(base[0], (myTrees.size()-1)));
    }
    else if((tempData == 0) && (tempNumber == 0))/* string and float */
    {
      /* static_cast to <YourAVLTreeClassName<std::string, float>*> if needed */
        AVLTreeBase *myTreeBase = new tree<std::string, float>(tempOrder);
        // This is for retrival. If you wanted to preform tree opperations it happens on myTree
        //tree<char,int> *myTree = static_cast<tree<char,int>*>(myTreeBase);

        myTrees.push_back(myTreeBase);
        std::pair<int,int> types; types = std::make_pair (tempData,tempNumber);
        m_forestMap.insert(std::pair<std::string, std::pair<int,int> >(base[0], (types)));
        m_treeBaseMap.insert(std::pair<std::string, int>(base[0], (myTrees.size()-1)));
    }
    else
    {
      // invalid case
    }
  }
  else
  {
    // tree is in vector
    // we can proceed with insert
    //implimentations that don't work because no matter how hard I try you simply cannot add trees to a vector
    //int tempData = myTrees[(m_forestMap.find(base[0])->second)]->getDataType();
    //int tempNumber = myTrees[(m_forestMap.find(base[0])->second)]->getNumberType();
    // insert data, number pair
    if((m_forestMap.find( base[0] )->second.first == 0) && (m_forestMap.find( base[0] )->second.second == 0))//* character and integer */)
    {
      /* static_cast to <YourAVLTreeClassName<char, int>*> if needed */
      //tree<char,int> *myTree = static_cast<tree<char,int>*>(myTreeBase);
      AVLTreeBase *myBase = myTrees[m_treeBaseMap.find(base[0])->second];
      tree<char,int> *myTree = static_cast<tree<char,int>*>(myBase);
      char tempData = base[1][0];
      int tempNumType = atoi(base[2].c_str());
      myTree->insertNode(tempData,tempNumType);
    }
    else if((m_forestMap.find( base[0] )->second.first == 0) && (m_forestMap.find( base[0] )->second.second == 1))/* character and float */
    {
      /* static_cast to <YourAVLTreeClassName<char, float>*> if needed */
      AVLTreeBase *myBase = myTrees[m_treeBaseMap.find(base[0])->second];
      tree<char,float> *myTree = static_cast<tree<char,float>*>(myBase);
      char tempData = base[1][0];
      int tempNumType = atof(base[2].c_str());
      myTree->insertNode(tempData,tempNumType);
    }
    else if((m_forestMap.find( base[0] )->second.first == 1) && (m_forestMap.find( base[0] )->second.second == 0))/* string and integer */
    {
      /* static_cast to <YourAVLTreeClassName<std::string, int>*> if needed */
      AVLTreeBase *myBase = myTrees[m_treeBaseMap.find(base[0])->second];
      tree<std::string,int> *myTree = static_cast<tree<std::string,int>*>(myBase);
      std::string tempData = base[1];
      int tempNumType = atoi(base[2].c_str());
      myTree->insertNode(tempData,tempNumType);
    }
    else if((m_forestMap.find( base[0] )->second.first == 1) && (m_forestMap.find( base[0] )->second.second == 1))/* string and float */
    {
      /* static_cast to <YourAVLTreeClassName<std::string, float>*> if needed */
      AVLTreeBase *myBase = myTrees[m_treeBaseMap.find(base[0])->second];
      tree<std::string, float> *myTree = static_cast<tree<std::string, float>*>(myBase);
      std::string tempData = base[1];
      float tempNumType = atof(base[2].c_str());
      myTree->insertNode(tempData,tempNumType);
    }
    else
    {
      // invalid case
    }
  }
}

//std::ostream& operator << (std::ostream& out, AVLForest& avlForest)
//{
//  // print all trees
//  for(/* iterate over vector */)
//  {
//
//    if(/* character and integer */)
//    {
//      /* static_cast to <YourAVLTreeClassName<char, int>*> and print */
//    }
//    else if(/* character and float */)
//    {
//      /* static_cast to <YourAVLTreeClassName<char, float>*> and print */
//    }
//    else if(/* string and integer */)
//    {
//      /* static_cast to <YourAVLTreeClassName<std::string, int>*> and print */
//    }
//    else if((/* string and float */))
//    {
//      /* static_cast to <YourAVLTreeClassName<std::string, float>*> and print */
//    }
//    else
//    {
//      // invalid case
//    }
//
//    return out;
//    }
//}
