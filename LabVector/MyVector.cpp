#include "MyVector.h"


MyVector::MyVector(int l) {

	length = l;

	arr = new double[l];

}

double MyVector::operator[](int i) const { 

	return arr[i];

}

double& MyVector::operator[](int i) {

	return arr[i];

}

void MyVector::safe_set(int i, double elem) {

	if (i < 0 || i >= length) {
		throw Index_out_bound_exception("Fuori index");
	}

	arr[i] = elem;

}

double MyVector::safe_get(int i) {

	if (i < 0 || i >= length) {
		throw Index_out_bound_exception("Fuori index");
	}

	return arr[i];

}

MyVector::~MyVector() {

	delete []arr;

}

