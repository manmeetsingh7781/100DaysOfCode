#include <iostream>
// Manmeet Singh

class Arrays {
protected:

	// the capacity of an array
	int size;

	// pointer to keep track of number of elements in the array
	// it is included as well for ex: i = 0 to i = len not i < len
	int len;

	// variable to store our array in
	int* data;

public:

	/* 
	
	default constructor
	@param : s = Integer value, default 10
			 Sets the size of an array, size is constant variable
	If no value is present in calling of constructor s will be assigned 10
	*/
	Arrays(int s = 10) : size(s) {
		data = new int[size];
		
		// set the default values of the array
		for (int i = 0; i < size; i++) data[i] = INT_MAX;
		
		len = -1;
	}

	// override the cout operator so that we can print the array as cout << array
	friend ostream& operator<<(ostream& out, const Arrays& arr) {
		// print the elements of arr
		for (int i = 0; i <= arr.len; i++) {
			out << arr.data[i] << " ";
		}
		out << endl;
		return out;
	}
	

	/*
		Insert an element into the array if we have empty space
	*/
	bool insert(int element) {
		
		// if we have space in array then insert
		if (!isFull()) {
			// increment the length 
			len++;
			data[len] = element;
			return true;
		}
		return false;
	}

	/*
		Remove an element at the given index
		and then Shift the elements to the left 
	*/

	bool remove(int index) {
		// if we have elements in array 
		if (!isEmpty()) {

			// validate index value
			if (index >= 0 && index < size) {

				// shift elements replacing index value will result in deleting the value at index we want
				for (int i = index; i < len; i++) {
					data[i] = data[i + 1];
				}
				
				// replace last item with NULL because we shifted the items
				data[len] = INT_MAX;
				
				len--;
				return true;
			}

			else {
				cout << "Index out of bounds";
				return false;
			}
		}
		else {
			cout << "List is empty" << endl;
			return false;
		}
	}


	/*
		@param element: int
						performs linear search in unordered array
						if founds return index
						else return -1 indicating index not found
	*/
	int search(int element) {
		for (int i = 0; i <= len; i++) {
			if (data[i] == element) return i;
		}
		return -1;
	}
	
	bool isFull() { return len == size - 1; }

	bool isEmpty() { return len == -1; }

	~Arrays() {
		delete[] data;
	}
};