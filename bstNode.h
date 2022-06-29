#ifndef BSTNODE_H
#define BSTNODE_H
template <typename T>
class bstNode {
	bstNode<T> * left;
	bstNode<T> * right;
	bstNode<T> * parent;
	T key;
	template<typename U>
	friend class BST;

public:
	bstNode(T key) : key(key) {left = nullptr; right = nullptr; parent = nullptr; }
	bstNode<T> * getLeft() {return this->left; }
	bstNode<T> * getRight() {return this->right; }
	bstNode<T> * getParent() {return this->parent; }
	T getKey() {return this->key; }

	void setLeft(bstNode<T> * left) {this->left = left; }
	void setRight(bstNode<T> * right){this->right = right; }
	void setParent(bstNode<T> * parent) {this->parent = parent; }
	void setKey(T key) {this->key = key; }

	friend ostream &operator<<(ostream &os, bstNode<T> &node) {
		//os << "BSTNode " <<&node << " key = " <<node.key << "left = " << node.left << "right = " << node.right;
		return os << "Key= " << node.key << endl;
	}
};
#endif