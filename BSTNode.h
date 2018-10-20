// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"
#include <iomanip>

#ifndef BSTNODE_H
#define BSTNODE_H

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
  Key k;                  // The node's key
  E it;                   // The node's value
  BSTNode* lc;            // Pointer to left child
  BSTNode* rc;            // Pointer to right child
  unsigned int rcIsThread : 1;
  unsigned int lcIsThread : 1;

public:
  // Two constructors -- with and without initial values
	BSTNode() {
		lc = rc = NULL;
		rcIsThread = 0;
		lcIsThread = 0;
	}
	BSTNode(Key K, E e, BSTNode* l = NULL, BSTNode* r = NULL) {
		k = K; it = e; lc = l; rc = r;
		rcIsThread = 0;
		lcIsThread = 0;
	}
  ~BSTNode() {}             // Destructor

  // Functions to set and return the value and key
  E& element() { return it; }
  void setElement(const E& e) { it = e; }
  Key& key() { return k; }
  void setKey(const Key& K) { k = K; }

  // Functions to set and return the children
  inline BSTNode* left() const { return lc; }
  void setLeft(BinNode<E>* b) { lc = (BSTNode*)b; }
  inline BSTNode* right() const { return rc; }
  void setRight(BinNode<E>* b) { rc = (BSTNode*)b; }

  // Return true if it is a leaf, false otherwise
  bool isLeaf() { return (lc == NULL) && (rc == NULL); }

  //Getter and setters for bitfields
  void setRcIsThread(unsigned int set) {
	  if (set == 1 || set == 0) {
		  rcIsThread = set;
	  }
  }
  
  void setLcIsThread(unsigned int set) {
	  if (set == 1 || set == 0) {
		  lcIsThread = set;
	  }
  }

  bool getRcIsThread() {
	  return rcIsThread;
  }

  bool getLcIsThread() {
	  return lcIsThread;
  }

  friend std::ostream& operator<<(std::ostream& output, BSTNode& node) {
	  output << setw(5) << node.key() << '|' << setw(15) << node.element() << "|\n";
	  return output;
  }
};

#endif