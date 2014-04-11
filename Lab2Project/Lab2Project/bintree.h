/*
BINTREE_H
Binary Search Tree - Header file

CSS 343 A with Dr. Zander
@author Nick Abel
@author Martha Pidcock

*/

#ifndef BINTREE_H
#define BINTREE_H

#include "nodedata.cpp"

class BinTree { // you add class/method comments and assumptions

friend ostream & operator<<(ostream &, const BinTree &);

public:
	BinTree();						// constructor
	BinTree(const BinTree &);		// copy constructor
	~BinTree();						// destructor, calls makeEmpty
	bool isEmpty() const;		// true if tree is empty, otherwise false
	void makeEmpty();			// make the tree empty so isEmpty returns true
	BinTree& operator=(const BinTree &);
	bool operator==(const BinTree &) const;
	bool operator!=(const BinTree &) const;
	bool insert(NodeData*);
	bool retrieve(const NodeData&, NodeData*&) const;
	void displaySideways() const;	// displays the tree sideways

	int getDepth(const NodeData) const;
	void arrayToBSTree(NodeData*[]);
	void bstreeToArray(NodeData*[]);
	//...

private:
	struct Node {
		//NodeData* data;		// pointer to data object
		Node* left;			// left subtree pointer
		Node* right;		// right subtree pointer
	};

	Node* root; // root of the tree

	// utility functions
	void inorderHelper( ... ) const;
	void sideways(Node*, int) const;
	//...
}; 

#endif