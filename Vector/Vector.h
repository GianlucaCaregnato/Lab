#ifndef Vector_h
#define Vector_h
#include <initializer_list>
#include <algorithm>
#include <iostream>

template<typename T>
class Vector {

private:

	size_t size;
	size_t element;
	T* elem;

public:

	Vector();
	Vector(int, T a[] = nullptr);
	Vector(std::initializer_list<T>);

	T at(int i) const { return elem[i]; };
	T operator [] (int i) const { return at(i); };

	size_t get_size() const { return element; };

};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T> &v);

#include "Vector.hpp"


#endif
