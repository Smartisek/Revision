#include "Flower.h"

Flower::Flower() {
	this->name = "default";
	this->price = 0.00f;
	this->numPedals = 0;
}

Flower::Flower(string s, int i, float f) {
	this->name = s;
	this->numPedals = i;
	this->price = f;
}

void Flower::setName(string s) {
	this->name = s;
}

void Flower::setPrice(float f) {
	this->price = f;
}

void Flower::setPedals(int i) {
	this->numPedals = i;
}

string Flower::getName() const {
	return name;
}

int Flower::getPedals() const {
	return numPedals;
}

float Flower::getPrice() const {
	return price;
}


ostream& operator<<(ostream& out, const Flower &p) {
	out << p.getName() << " with " << p.getPedals() << " pedals for " << p.getPrice() << endl;
	return out;
}

Flower& Flower::operator+(float p) {
	this->price += p;
	return *this;
}

Flower& Flower::operator++() {
	this->numPedals++;
	return *this;
}