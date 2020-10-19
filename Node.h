#ifndef NODE_H
#define NODE_H

namespace node {
  
  /****************************************************
  **  THIS IS A NODE OBJECT USED TO HOLD DATA AND    **
  **    REFERENCES TO THE 2 CHILD NODES.             **
  ****************************************************/
  struct Node {
    Node *left;
    Node *right;
    int value;
  };

}

#endif
