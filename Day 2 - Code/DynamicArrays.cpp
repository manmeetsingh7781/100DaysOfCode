#include <iostream>
#include "Arrays.cpp"
// Manmeet Singh
class DynamicArrays : public Arrays {

public:

	/*
	inherent class Arrays and calling its contructor 
	@param s: int -> defines the size of an array
			  if no value is present in constructor then array is of size 10
	*/
	DynamicArrays(int s = 10) : Arrays(s){}

	void insert(int element) {

		/*
			this will follow normal approach to add an element in array
			if it returns true then element added
			else we need to expand the size of array and insert element again
			this will cause O(N) run time and Space of O(N + K) where K is new size factor
			N = the number of elements in array
		*/
		bool result = __super::insert(element);
		if (!result) {
			
			// here we need to increase the size of an array
			grow_size();

			// once the size is updated, add the element to the array
			__super::insert(element);
		}
		
	}

	void grow_size() {

		// expand the array
		double factor = 2.00;
		int new_size = floor(factor * size);

		// backup data
		int* temp = data;


		// update size 
		size = new_size;
		data = new int[size];

		// copy elements from temp to new array
		for (int i = 0; i <= len; i++) this->data[i] = temp[i];

		// release memory of temp variable 
		delete[] temp;
	}

	int empty_slots() {
		return (this->size - 1) - this->len;
	}

	void remove(int index) {
		if (!isEmpty()) {

			__super::remove(index);
			
			// shrink array if we have empty slots more than half of the size of an array
			double factor = 1.5;
			int sliced_size = floor(size / factor);
			if (empty_slots() > sliced_size) {
				this->shrink_size(sliced_size);
			}
		}
	}

	void shrink_size(int new_size) {
		int* temp = data;
		size = new_size;
		data = new int[size];
		for (int i = 0; i <= len; i++) this->data[i] = temp[i];

		// release memory of temp variable 
		delete[] temp;
	}


};