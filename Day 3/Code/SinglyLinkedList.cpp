#include <iostream>
#include "Node.cpp"

class SinglyLinkedList {
protected:

	// a pointer which will hold the list and points to the beginning of the list
	Node* head;

	// keep tracks of number of items in the list
	int len;

public:

	SinglyLinkedList(){

		// no value is given to the list
		head = nullptr;
		
		// no elements were added in the list
		len = 0;
	}

	SinglyLinkedList(int data) {
		
		// value is given and being assigned to the node and pointing front of the list
		head = new Node(data);
		len = 1;
		
	}
	

	// insert element into the list
	void insert(int data) {
		
		// if head is not NULL insert Node in the end of the list
		if (head) {

			// backup Node so that we can iterate over and go to the end of the list
			get(len - 1)->setNext(new Node(data));


			/*
				to insert item at the front of the list use this line below, rather then transversing through the list which takes O(N) time
				this takes O(1) time
					--> head = new Node(data, head);
			*/
		}
		else {
			head = new Node(data);
		}

		len++;
	}

	// get the Node at the given index in the list
	Node * get(int index) {
		// if index is out of range then return NULL
		if (index < 0 || index >= len) return nullptr;
		else {
			// copy the data into temp node so that we dont lose our original data
			Node* temp_head = head;

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

	void remove(int index) {
		// if index is out of range then return null
		if (index < 0 || index >= len) return;
		else {
			
			// a node right before the node we want to remove
			Node* pre_node = get(index - 1);

			// if pre_node is null in this case its the first node in the list
			// else null else we are somewhere in the list from 1 to n-1

			if (pre_node) {
				Node* delete_node = pre_node->getNext();

				// delete the node and assign it new value
				pre_node->setNext(delete_node->getNext());

				// release the memory
				delete delete_node;

			}
			else {
				head = head->getNext();
			}

			len--;

		}
	}
	
	int length() { return len; }

	friend ostream& operator<<(ostream& out, const SinglyLinkedList& list) {
		// copy the data into temp node so that we dont lose our original data
		Node* temp_head = list.head;

		// transverse through the temp data
		while (temp_head) {
			out << *temp_head << " ";
			temp_head = temp_head->getNext();
		}
		out << endl;
		return out;
	}
	
};