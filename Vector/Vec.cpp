#include "Vector.h"
#include <iostream>

int main() {

	Vector<std::string> test = Vector<std::string>{ "ei" , "ciao"};

	std::cout << test;

	Vector<int> test1 = Vector<int>{1 , 2, 4};

	std::cout << test1;



}