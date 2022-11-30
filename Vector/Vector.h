#ifndef Vector_h
#define Vector_h
#include <initializer_list>
#include <algorithm>

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


};

#include "Vector.hpp"

#endif
