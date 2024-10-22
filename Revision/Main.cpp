#include "Recursion.h"
#include <iostream>

using namespace std; 

void recursionQuestion1();

int main() {

	recursionQuestion1();

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