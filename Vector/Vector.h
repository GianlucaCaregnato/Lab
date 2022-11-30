#ifndef Vector_h
#define Vector_h
#include <initializer_list>

template<typename T>
class Vector {

public:
	Vector();
	Vector(int, T a[] = nullptr);
	Vector(std::initializer_list<T>);



#include "Vector.hpp"

private:

	int size;
	int element;
	T* elem;

};

#endif
