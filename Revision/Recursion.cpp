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