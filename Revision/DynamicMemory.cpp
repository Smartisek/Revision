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

int countEven(int* arr, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		if (*arr%2 == 0) {
			total += 1;
		}
		arr++;
	}
	return total;
}

void dynamic_main4() {
	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q4 =================" << endl;
	int* arr = new int[6] {1, 2, 3, 4, 5, 8};
	cout << "Original Array: ";
	display(arr, 6);
	cout << "Count of even: " << countEven(arr, 6) << endl;
}

double* getMax(double* arr, int size) {
	if (size == 0) {
		return nullptr;
	}

	double* max = arr;
	for (int i = 1; i < size; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
	}
	return max;
}

void dynamic_main5()
{
	cout << "\n\n\n=========  Pointers & Dynamic Memory  Q5 =================" << endl;
	double* arr = new double[5] {1.2, 2.3, 3.4, 9.5, 4.5};
	cout << "Maximum Value: " << getMax(arr, 5) << endl;
}