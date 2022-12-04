#ifndef VectorGian_hpp
#define VectorGian_hpp
#include "VectorGian.h"


template<typename T>
void Vector<T>::resize() {

	T[] temp = new T[size + 10];

	std::copy(elem[0], elem[size - 1], temp);

	delete[] elem;

	elem = temp;
}

template<class T>
Vector<T>::Vector()
	: elem{ new T[10] }, size{ 10 }, element{ 0 } {}

template<typename T>
Vector<T>::Vector(int i, T a[]) //al momento bisogna passare un array riempito completamente
	: elem{ a }, size{ i }, element{ i } {}

template<typename T>
Vector<T>::Vector(std::initializer_list<T> l)
	: elem{ new T[l.size()] }, size{ l.size() }, element{ l.size() } {

	std::copy(l.begin(), l.end(), elem);

}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& v) {

	for (int i = 0; i < v.get_size(); i++) {
		os << v[i] << " ";
	}
	os << std::endl;
	return os;
}


#endif