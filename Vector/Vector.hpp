#ifndef Vector_hpp
#define Vector_hpp
#include "Vector.h"

template<class T>
Vector<T>::Vector() 
	: elem{ new T[10] }, size{ 10 }, element{ 0 } {}

template<typename T>
Vector<T>::Vector(int i, T a[]) //al momento bisogna passare un array riempito completamente
	: elem{ a }, size{ i }, element{ i } {}

template<typename T>
Vector<T>::Vector(std::initializer_list<T> l) 
	: size{ l.size() }, element{ l.size() } {

	std::copy(l.begin(), l.end(), elem);

}




#endif
