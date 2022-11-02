#include <iostream>
#include "MyVector.h"

int main() {

	MyVector vec = MyVector(5);

	vec.safe_set(0, 1.1);

	std::cout << vec.safe_get(0) << "\n";

	vec[0] = 7.3;

	std::cout << vec.safe_get(0) << "\n";

	std::cout << vec[0] << "\n";

}