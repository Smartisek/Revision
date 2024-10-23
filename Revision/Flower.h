#pragma once
#include <iostream>
using namespace std;
class Flower
{
	string name;
	int numPedals;
	float price;
public:
	Flower();
	Flower(string s, int i, float f);
	void setName(string s);
	void setPrice(float f);
	void setPedals(int i);
	string getName() const;
	int getPedals() const;
	float getPrice() const;
	friend ostream& operator<<(ostream& out, const Flower &p);
	Flower& operator+(float p);
	Flower& operator++();
};

