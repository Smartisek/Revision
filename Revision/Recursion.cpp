#include "Recursion.h"


// p initial position
bool isPalindrome(const string& s, int p) {
	// if first and last letter does not equal then just return 
	if (s[p] != s[s.length() - 1 - p]) {
		return false; 
	} 
	// when the recursion reached the middle of the string , return true
	if (s.length() / 2 - p < 2) {
		return true;
	}
	return isPalindrome(s, p + 1); // recursion, keeps calling itself until above conditions met, either it is not palindrome or it is 
}

void minMax(int* arr, int size, int& min, int& max, int pos) {
	// when pos equals size it means it processed all the elements in array and can stop 
	if (pos == size) {
		return;
	}
	// if current position is less than current min, update the min 
	if (arr[pos] < min) {
		min = arr[pos];
	}
	// if current position is greater than current max, update the max
	if (arr[pos] > max) {
		max = arr[pos];
	}
	if (pos == 0) {
		min = max = arr[pos];
	}
	// recursion that keeps calling itself until pos is equal to initial statement that it equals size 
	minMax(arr, size, min, max, pos + 1);
}