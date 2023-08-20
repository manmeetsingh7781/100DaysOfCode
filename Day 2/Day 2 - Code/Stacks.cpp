#include <iostream>
#include "DynamicArrays.cpp"
// Manmeet Singh
class Stack : public DynamicArrays {

	/*
		Stack follows FILO or LIFO 
			FILO = First In Last Out
			LIFO = Last In First Out

		we can use Arrays or Linked List to implement this

		This is going to be Dynamic Array based Implementation 

		As we are extending the Super class Dynamic Arrays we are also adapting the functions from
		Arrays and DynamicArrays class in this class 
	*/

public:

	Stack(int s = 10) : DynamicArrays(s) {}

	void enqueue(int element) {
		// insert element on top of the stack
		__super::insert(element);
	}

	void dequeue() {
		// remove last element from the stack
		if (!isEmpty()) {
			__super::remove(len);
		}
		else {
			cout << "Stack is empty" << endl;
		}
	}

	int top() {
		if (!isEmpty()) {
			return data[len];
		}
		else {
			cout << "Stack is empty!" << endl;
			return -1;
		}
	}

};