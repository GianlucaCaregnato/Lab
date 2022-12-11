#ifndef VectorG_h
#define VectorG_h
#include <initializer_list>
#include <algorithm>
#include <iostream>

template<typename T>
class VectorG {

private:

	size_t size;
	size_t element;
	T* elem;

	void resize();

public:

	VectorG();
	VectorG(int, T a[] = nullptr);
	VectorG(std::initializer_list<T>);

	T at(int i) const { return elem[i]; };
	T operator [] (int i) const { return at(i); };

	size_t get_size() const { return element; };


};

template<typename T>
std::ostream& operator<<(std::ostream& os, const VectorG<T>& v);

#include "VectorG.hpp"


#endif