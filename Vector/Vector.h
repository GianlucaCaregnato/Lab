#ifndef Vector_h
#define Vector_h
#include <initializer_list>
#include <algorithm>
#include <iostream>

template<typename T>
class Vector {

private:

	int size;
	int element;
	T* elem;

public:

	Vector();
	Vector(int, T a[] = nullptr);
	Vector(std::initializer_list<T>);

	T at(int) const;
	T operator [] (int) const;

	int size() const { return element; };

};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T> &v);

#include "Vector.hpp"


#endif
