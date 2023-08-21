#include <iostream>
#include "./SinglyLinkedList.cpp"

class CircularLinkedList : public SinglyLinkedList {
	/*
		Circular Linked List is similar to Singly Linked List
		besides we have a pointer in the end of list connected to the head rather than NULL

	*/

public:

	CircularLinkedList() : SinglyLinkedList() {}
	CircularLinkedList(int data) : SinglyLinkedList(data) {}
	

	// insert element into the list
	void insert(int data) {

		// if head is not NULL insert Node in the end of the list
		if (head) {

			// backup Node so that we can iterate over and go to the end of the list
			get(len - 1)->setNext(new Node(data, head));

			/*
				to insert item at the front of the list use this line below, rather then transversing through the list which takes O(N) time
				this takes O(1) time
					--> head = new Node(data, head);
			*/
		}
		else {
			head = new Node(data, head);
		}

		len++;
	}

	friend ostream& operator<<(ostream& out, const CircularLinkedList& list) {
		// copy the data into temp node so that we dont lose our original data
		Node* temp_head = list.head;
		int i = 0;
		// transverse through the temp data
		while (i != list.len) {
			out << *temp_head << " ";
			temp_head = temp_head->getNext();
			i++;
		}
		out << endl;
		return out;
	}
};