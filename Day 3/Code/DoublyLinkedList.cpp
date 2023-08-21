#include <iostream>
#include "BNode.cpp"

class DoublyLinkedList{

private:

	// a pointer which holds the front of the list 
	BNode *head;

	// keep tracks of number of elements in the list
	int len;
public:

	// default constructor
	DoublyLinkedList() {
		head = nullptr;
		len = 0;
	}

	DoublyLinkedList(int data) {
		head = new BNode(data);
		len = 1;
	}

	void insert(int data) {
		// if we already have node
		if (head) {
			
			// get the last node in the list
			BNode* pre_node = get(len - 1);

			// create a new node
			BNode* new_node = new BNode(data);

			// set previous pointer reference of new node to the last node in the list
			new_node->setPrev(pre_node);

			// put the new node right after the last node
			pre_node->setNext(new_node);

		}
		else {
			// if our node is null
			head = new BNode(data);
		}

		len++;
	}

	void remove(int index) {
		// if index is out of range then return null
		if (index < 0 || index >= len) return;
		else {

			// a node we want to remove
			BNode* node_to_remove = get(index);

			BNode* prev_node = node_to_remove->getPrev();
		

			// if we are not removing head node then we must have prev node 
			if (prev_node) {

				BNode* next_node = node_to_remove->getNext();

				prev_node->setNext(next_node);

				// if we have next node valid then assign it if its not value which in case when node to remove is last 
				if (next_node) next_node->setPrev(prev_node);

			}
			else {

				// move head pointer to next 
				head = node_to_remove->getNext();

				// remove the first item by setting it null
				head->setPrev(nullptr);
			}


			delete node_to_remove;
			len--;

		}
	}

	int length() { return len; }


	// get the Node at the given index in the list
	BNode* get(int index) {
		// if index is out of range then return NULL
		if (index < 0 || index >= len) return nullptr;
		else {
			// copy the data into temp node so that we dont lose our original data
			BNode* temp_head = head;

			int i = 0;
			// transverse through the temp data
			while (temp_head) {

				// if we are at the index we need then return the node
				if (i == index) return temp_head;
				temp_head = temp_head->getNext();
				i++;
			}
		}
	}


	friend ostream& operator<<(ostream& out, const DoublyLinkedList& list) {
		// copy the data into temp node so that we dont lose our original data
		BNode* temp_head = list.head;

		// transverse through the temp data
		while (temp_head) {
			out << *temp_head << " ";
			temp_head = temp_head->getNext();
		}
		out << endl;
		return out;
	}
};