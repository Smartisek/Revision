#include "Recursion.h"
#include "AllKinds.h"
#include "Flower.h"
#include "DynamicMemory.h"
#include <iostream>

using namespace std; 

void display(int* arr, int size);
void recursionQuestion1();
void recursionQuestion2();
void recursionQuestion3();
void classes_q1();
void classes_flowerMain();


int main() {
	
	dynamic_main5();
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

void recursionQuestion3() {
	string s = "pots&pans";
	cout << s << " Reversed is " << reverse(s) << endl;
	printString(s);
}

void classes_q1()
{
	AllKinds ak(4, 3.15145, 987536987l);
	cout << "Integer + Float = " << ak.sumIntFloat() << endl;
	cout << "Integer + Long = " << ak.sumIntLong() << endl;
	cout << "Long + Float = " << ak.sumLongFloat() << endl;

}

void classes_flowerMain()
{
	Flower f;
	Flower f2("Daisy", 12, .25);
	cout << "F: " << f << endl;
	cout << "F2: " << f2 << endl;

	//test setters
	f.setName("Lily");
	f.setPedals(6);
	f.setPrice(1.50);
	cout << "After setters called " << endl;
	cout << "F: " << f << endl;

	f2 = f2 + .5;
	cout << "F2 After price increase: " << f2 << endl;


	cout << "Post increment on f: " << ++f << endl;


}