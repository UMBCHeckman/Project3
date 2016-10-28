#include "AVLForest.h"
#include <map>
#include <string>
#include <stdio.h>
//#include <sstream>
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
  vector<string> words;
  char str[] = line;
  char * pch;
  pch = strtok (str,",");
  while (pch != NULL)
  {
    words.push_back(pch);
    pch = strtok (NULL, ",");
  }
  if(m_forestMap.find( words[0] ) == m_forestMap.end())/* check if tree not already in vector */
  {
    // create a new tree and add it to the vector

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
