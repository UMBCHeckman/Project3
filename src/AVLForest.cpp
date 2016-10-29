#include "AVLForest.h"
#include <map>
#include <string>
#include <stdio.h>
#include <sstream>
//#include <cstdlib>
#include <iostream>


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
      base.push_back(strLine)
  }
    //digest the line into it's components
  if((m_forestMap.find( strLine[0] )) == m_forestMap.end())/* check if tree not already in vector */
  {
    // create a new tree and add it to the vector
      AVLTreeBase *myTreeBase = new AVLTreeBase;
      myTreeBase->PrintOrder(thesecondthing);
      myTreeBase->DataType(thethirdthing);
      myTreeBase->NumberType(theforththing);
      myTrees.push_back(myTreeBase);
      m_forestMap.insert ( std::pair<string,AVLTreeBase*>(thefirstthing,myTreeBase) );
      //my tree has been created but not static casted yet

    if(/* character and integer */)
    {
      //static_cast<myTrees<char, int>*>/* static_cast to <YourAVLTreeClassName<char, int>*> if needed */
    }
    else if(/* character and float */)
    {
    /* static_cast to <YourAVLTreeClassName<char, float>*> if needed */

    }
    else if(/* string and integer */)
    {
      /* static_cast to <YourAVLTreeClassName<std::string, int>*> if needed */
    }
    else if((/* string and float */))
    {
      /* static_cast to <YourAVLTreeClassName<std::string, float>*> if needed */
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

    // insert data, number pair

    if(/* character and integer */)
    {
      /* static_cast to <YourAVLTreeClassName<char, int>*> if needed */
    }
    else if(/* character and float */)
    {
      /* static_cast to <YourAVLTreeClassName<char, float>*> if needed */
    }
    else if(/* string and integer */)
    {
      /* static_cast to <YourAVLTreeClassName<std::string, int>*> if needed */
    }
    else if((/* string and float */))
    {
      /* static_cast to <YourAVLTreeClassName<std::string, float>*> if needed */
    }
    else
    {
      // invalid case
    }
  }
}

std::ostream& operator << (std::ostream& out, AVLForest& avlForest)
{
  // print all trees
  for(/* iterate over vector */)
  {

    if(/* character and integer */)
    {
      /* static_cast to <YourAVLTreeClassName<char, int>*> and print */
    }
    else if(/* character and float */)
    {
      /* static_cast to <YourAVLTreeClassName<char, float>*> and print */
    }
    else if(/* string and integer */)
    {
      /* static_cast to <YourAVLTreeClassName<std::string, int>*> and print */
    }
    else if((/* string and float */))
    {
      /* static_cast to <YourAVLTreeClassName<std::string, float>*> and print */
    }
    else
    {
      // invalid case
    }

    return out;
    }
}
