#ifndef VectorG_hpp
#define VectorG_hpp
#include "VectorG.h"


template<typename T>
void VectorG<T>::resize() {

	T[] temp = new T[size + 10];

	std::copy(*elem[0], *elem[size - 1], temp);

	delete[] elem;

	elem = temp;
}

template<class T>
VectorG<T>::VectorG()
	: elem{ new T[10] }, size{ 10 }, element{ 0 } {}

template<typename T>
VectorG<T>::VectorG(int i, T a[]) //al momento bisogna passare un array riempito completamente
	: elem{ a }, size{ i }, element{ i } {}

template<typename T>
VectorG<T>::VectorG(std::initializer_list<T> l)
	: elem{ new T[l.size()] }, size{ l.size() }, element{ l.size() } {

	std::copy(l.begin(), l.end(), elem);

}

template<typename T>
std::ostream& operator<<(std::ostream& os, const VectorG<T>& v) {

	for (int i = 0; i < v.get_size(); i++) {
		os << v[i] << " ";
	}
	os << std::endl;
	return os;
}


#endif