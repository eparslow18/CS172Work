#pragma once
#ifndef Vector_h
#define Vector_h

template <typename T>
class vector {
private:
	int size = 0;
	T *buffer;
	int count = 0;
public: 

	vector<T>() {
		size = 10;
		buffer = new T[size];// pointer to a new array of size(size)
		count = 0;
	};
	
	vector<T>(int size) {
		this->size = size;
		this->buffer = new T[size];
		this->count = 0;
	};

	
	vector<T>(int size, T elementType) {//sets to size wanted and fills it with intial value
		buffer = new T[size];
		for (int i = 0; i < size; i++)
		{
			buffer[i] = T.buffer[i];
		}
	};

	
	void push_back(T item) {//putting item at that point in the array and increasing the size of it
		buffer[count] = item;
		count++;
	};

	//deletes the last element
	void pop_back() {
		delete buffer[count];
		count--;
	};

	
	unsigned const int size1() {
		return count;
	};

	T const at(int index) {//finding element at that index
		return buffer[index];
	};

	bool const empty() {//is the array empty? Y o N
		if (count = 0){
			return true;
		}
		else
			return false;
	};

	 //set everything to zero
	void clear() {
		count = 0;
		size = 0;
		buffer = 0;
	};

	
	void swap(vector<T> v2) {//swapping the vectors
		T *temp = buffer;
		buffer = v2;
		v2 = temp;
	};
};

#endif 