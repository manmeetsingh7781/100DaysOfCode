#include <iostream>
class BNode {
	/*
		As we are Driving this BNode class with Node
		only difference is that we have Previous Pointer added in this class

		BNode 
				[ [ PREV ] | [ DATA ] | [ NEXT ] ]
	*/

private:
	int data;
	BNode* next;
	BNode* previous;

public:
	BNode() : BNode(NULL, nullptr, nullptr) {}
	
	BNode(int data): BNode(data, nullptr, nullptr)  {}

	BNode(int data, BNode* next) : BNode(data, next, nullptr) {}
	

	BNode(int data, BNode* next, BNode* prev) {
		setData(data);
		setPrev(next);
		setNext(prev);
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

	BNode* getNext() {
		return this->next;
	}

	void setNext(BNode* new_next) {
		this->next = new_next;
	}

	void setPrev(BNode* prev) {
		this->previous = prev;
	}

	BNode* getPrev() {
		return this->previous;
	}

};