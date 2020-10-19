#ifndef TREE_H
#define TREE_H

#include "Node.h"

namespace search_tree {

  /******************************************************
  **    THIS IS A CLASS USED TO REPRESENT A SIMPLE     **
  **      BINARY SEARCH TREE                           **
  ******************************************************/
  class Tree {
    private:
      // this is the root node ... the only node that the tree stores directly
      node::Node *root;

      // this is a variable used to store the number of values in the tree
      size_t size;

    public:

      // just sets the size equal to zero and sets the root to a NULL pointer
      Tree();

      // returns the number of elements in the tree
      size_t getSize();

      // inserts the new value into the tree in O(lg(N)) time.
      void insert(int value);
  };

}

#endif
