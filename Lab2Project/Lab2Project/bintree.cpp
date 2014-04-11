/*
BINTREE_CPP
Binary Search Tree - Source code

CSS 343 A with Dr. Zander
@author Nick Abel
@author Martha Pidcock

*/


//---------------------------------------------------------------------------
// displaySideways 
// Displays a binary tree as though you are viewing it from the side;
// hard coded displaying to standard output.

#include <stdio.h>
#include <iostream>
#include "bintree.h"

void BinTree::displaySideways() const {
   sideways(root, 0);
}

void BinTree::sideways(Node* current, int level) const {
   if (current != NULL) {
      level++;
      sideways(current->right, level);

      // indent for readability, 4 spaces per depth level 
      for(int i = level; i >= 0; i--) {
          cout << "    ";
      }

      cout << *current->data << endl;        // display information of object
      sideways(current->left, level);
   }
}

//-------------------------- operator<< --------------------------------------
ostream& operator<<(ostream& output, const BinTree& bt) {
   output << bt.root;
   return output;
}
