#include <iostream>

class Node {

private:
	// value to store in our block of node
	int data;

	// next pointer which stores the reference of next node 
	Node *next;
public:
	// default constructor 
	Node() : Node(NULL, nullptr) {}

	// passing data which then calls the another constructor to assign the data value and null to next pointer
	Node(int data) : Node(data, nullptr) {}

	// assiging data and next pointer the node
	Node(int data, Node* next) {
		this->data = data;
		this->next = next;
	}

	// print out the node using cout << *node 
	friend ostream& operator<<(ostream& out,const Node& node) {
		out << node.data;
		return out;
	}

	// getters and setters

	int getData() {
		return this->data;
	}

	void setData(int new_value) {
		this->data = new_value;
	}

	Node* getNext() {
		return this->next;
	}

	void setNext(Node* new_next) { 
		this->next = new_next;
	}
	
};