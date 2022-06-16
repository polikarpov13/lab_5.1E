#pragma once 
#include "Object.h"
#include <iostream>
#include <sstream>
#pragma pack(1)

using namespace std;

class LongLong : public Object
{
private:
	double x, y;
public:
	double getX() const { return x; }
	double getY() const { return y; }

	void setX(double value) { x = value; }
	void setY(double value) { y = value; }

	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);

	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);

	operator string() const;

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);

	friend bool operator > (LongLong&, LongLong&);
	friend bool operator < (LongLong&, LongLong&);
	friend bool operator == (LongLong&, LongLong&);
};