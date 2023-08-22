#include <iostream>

class BNode {
	/*
		A Node that will represent tree by connecting its children to grandchildren and so on, starting from root node

			   ROOT
			/		\
		 LEFT		RIGHT
	*/

private:
	int data;
	BNode* left;
	BNode* right;

public:
	BNode() : BNode(NULL, nullptr, nullptr) {}

	BNode(int data) : BNode(data, nullptr, nullptr) {}


	BNode(int data, BNode* left, BNode* right) {
		setData(data);
		setLeft(left);
		setRight(right);
	}


	// print out the node using cout << *node 
	friend ostream& operator<<(ostream& out, const BNode& node) {
		out << node.data;
		return out;
	}

	// getters and setters
	int getData() {
		if (this) return this->data;
		else return -1;
	}

	void setData(int new_value) {
		this->data = new_value;
	}

	void setRight(BNode* new_next) {
		this->right = new_next;
	}

	BNode* getRight() {
		return right;
	}

	BNode* getLeft() {
		return left;
	}

	void setLeft(BNode* new_next) {
		this->left = new_next;
	}

};