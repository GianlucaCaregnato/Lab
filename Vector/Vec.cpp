#include "Vector.h"
#include <iostream>

int main() {

	Vector<int>* test = new Vector<int>{ 1,2,3 };

	std::cout << test;

}