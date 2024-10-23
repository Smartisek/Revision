#include "Recursion.h"
#include <iostream>

using namespace std; 

void display(int* arr, int size);
void recursionQuestion1();
void recursionQuestion2();


int main() {

	recursionQuestion2();

	return 0;
}



void recursionQuestion1() {
	string s[] = { "racecar", "gohangasalamiimalasagnahog", "ractecar", "stark" };
	for (int i = 0; i < 4; i++) {
		//                                 if yes ?       if not :    
		string result = isPalindrome(s[i]) ? "Palindrome" : "Not palindrome";
		cout << s[i] << " is " << result << endl;
	}
}

void recursionQuestion2() {

	int* arr = new int[5] { 8, 2, 11, 4, 5 };
	display(arr, 5);
	int min, max;
	minMax(arr, 5, min, max, 0);
	cout << "Minimum Value: " << min << endl;
	cout << "Maximum Value: " << max << endl;
}





void display(int* arr, int size) {
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		if (i != 0)
			cout << ", ";
		cout << arr[i];
	}
	cout << "]" << endl;
}