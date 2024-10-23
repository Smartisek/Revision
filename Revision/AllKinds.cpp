#include "AllKinds.h"

AllKinds::AllKinds() {
	this->anInt = 0;
	this->aFloat = 0;
	this->aLong = 01;
}

AllKinds::AllKinds(int i, long l, float f) {
	this->anInt = i;
	this->aLong = l;
	this->aFloat = f;
}

void AllKinds::setInt(int i) {
	this->anInt = i;
}

void AllKinds::setLong(long l) {
	this->aLong = l;
}

void AllKinds::setFloat(float f) {
	this->aFloat = f;
}

int AllKinds::getInt() {
	return anInt;
}

long AllKinds::getLong() {
	return aLong;
}

float AllKinds::getFloat() {
	return aFloat;
}

long AllKinds::sumIntLong() {
	return anInt + aLong;
}

float AllKinds::sumIntFloat() {
	return anInt + aFloat;
}

long AllKinds::sumLongFloat() {
	return aLong + aFloat;
}
