#include "MyVector.h"


MyVector::MyVector(int l) {

	length = l;

	arr = new double[l];



}

double MyVector::operator[](int i) const { //lettura

	return arr[i];

}

double& MyVector::operator[](int i) {

	return arr[i];

}

void MyVector::safe_set(int i, double elem) {

	//dopo faccio i controlli

	arr[i] = elem;

}

double MyVector::safe_get(int i) {

	//faccio i controlli

	return arr[i];

}

MyVector::~MyVector() {

	delete arr;

}
