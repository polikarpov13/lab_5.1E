#include "LongLong.h" 

LongLong::LongLong() : Object()
{
	x = 0, y = 0;
}

LongLong::LongLong(double x = 0, double y = 0) : Object() {
	this->x = x;
	this->y = y;
}

LongLong::LongLong(const LongLong& A) : Object() {
	x = A.getX();
	y = A.getY();
}

ostream& operator << (ostream& out, const LongLong& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, LongLong& A) {
	cout << " Cтаршу частину = "; in >> A.x;
	cout << " Mолодшу частину = "; in >> A.y;

	return in;
}

LongLong::operator string() const {
	stringstream ss;

	ss << " Старша частина: " << x << endl;
	ss << " Mолодша частина: " << y << endl;

	return ss.str();
}

LongLong operator +(LongLong& A, LongLong& B) {

	LongLong t(A.x + B.x, A.y + B.y);

	return t;

}

LongLong operator *(LongLong& A, LongLong& B)

{

	LongLong t(A.x * B.x, A.y * B.y);

	return t;

}



bool operator > (LongLong& A, LongLong& B)

{

	return ((A.x > B.x) || (A.x == B.x && A.y > B.y));

}

bool operator < (LongLong& A, LongLong& B)

{

	return ((A.x < B.x) || (A.x == B.x && A.y < B.y));

}

bool operator == (LongLong& A, LongLong& B)

{

	return (A.x == B.x && A.y == B.y);

}