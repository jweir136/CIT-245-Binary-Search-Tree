#include <iostream>
#include "Node.h"
#include "Tree.h"

using namespace std;

/*************************************
**    SET THE SIZE TO 0 AND THE ROOT *
**      NODE TO NULL POINTER (0)     *
*************************************/
search_tree::Tree::Tree() {
  this->size = 0;
  this->root = NULL;
}

/*************************************
**    JUST RETURN THE SIZE FIELD    **
*************************************/
size_t search_tree::Tree::getSize() {
  return this->size;
}

/*****************************************************************
**    STARTING AT THE ROOT NODE, GO TO THE LEFT OR RIGHT CHILD  **
**      DEPENDING ON WHETHER THE NEW VALUE IS GREATER THAN OR   **
**      LESS THAN THE VALUE IN THE CURRENT NODE. KEEP GOING     **
**      THROUGH THE TREE UNTIL YOU REACH A NODE THAT IS A NULL  **
**      POINTER.                                                **
*****************************************************************/
void search_tree::Tree::insert(int value) {
  node::Node *currentNode = this->root;

  while (currentNode != NULL) {
    if (currentNode->value == value)
      return;
    else if (currentNode->value > value)
      currentNode = currentNode->left;
    else
      currentNode = currentNode->right;
  }

  node::Node *newNode = new node::Node;
  newNode->value = value;
  newNode->left = NULL;
  newNode->right = NULL;

  currentNode = newNode;

  this->size++;
}
