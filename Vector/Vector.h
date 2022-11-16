#ifndef Vector_h
#define Vector_h
#include <initializer_list>

template<typename T>
class Vector {

public:
	Vector();
	Vector(int, T[] = nullptr);
	Vector(initializer_list<T>);


private:

	int size;
	T* elem;

};

#endif
