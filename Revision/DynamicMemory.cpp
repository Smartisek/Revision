#include "DynamicMemory.h"

int totalOfArray(int* arr, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += *arr;
		arr++;
	}
	return total;
}

void dynamic_main1() {
	cout << "\n\n\n=========  Pointers & Dynamic Memory   =================" << endl;
	int* arr = new int[5] {1, 2, 3, 4, 5};
	cout << "The total of this array is: " << totalOfArray(arr, 5) << endl;
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void dynamic_main2() {
	int* x = new int(5);
	int* y = new int(10);
	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q2 =================" << endl;
	cout << "Before swap " << "x: " << *x << " and y:" << *y << endl;
	swap(x, y);
	cout << "After Swap " << "x: " << *x << " and y:" << *y << endl;

	delete x, y;
}

void reverse(int* arr, int size) {
	int* start = arr;
	int* end = arr + size - 1;
	while (start < end) {
		swap(start, end);
		start++;
		end--;
	}
}

void dynamic_main3() {
	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q3 =================" << endl;
	int* arr = new int[5] {1, 2, 3, 4, 5};
	cout << "Before Reverse: ";
	display(arr, 5);
	reverse(arr, 5);
	cout << "After reverse: ";
	display(arr, 5);
}