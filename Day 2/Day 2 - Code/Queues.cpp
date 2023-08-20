#include <iostream>
#include "DynamicArrays.cpp"
// Manmeet Singh
class Queue : public DynamicArrays {
	/*
		Queue follows FIFO
			FIFO = First In First Out

		we can use Arrays or LinkedList to implement this
		But I will be using Arrays

	*/

public:
	Queue(int s = 10) : DynamicArrays(s) {}

	void push(int element) {

		// insert element in the end of the queue
		__super::insert(element);
	}

	void pop() {
		// remove the first element
		__super::remove(0);
	}

	// returns whats on front of the queue is
	int peek() {
		if (!isEmpty()) return data[0];
		return -1;
	}

};