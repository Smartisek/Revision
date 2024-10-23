#pragma once
class AllKinds
{
	int anInt;
	long aLong;
	float aFloat;
public:
	AllKinds();
	AllKinds(int i, long l, float f);
	void setInt(int i);
	void setLong(long l);
	void setFloat(float f);
	int getInt();
	long getLong();
	float getFloat();
	long sumIntLong();
	float sumIntFloat();
	long sumLongFloat();
};

