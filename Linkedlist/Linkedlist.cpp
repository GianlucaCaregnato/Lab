#include <iostream>
#include "Link.h"


int main() {

	Link test = Link("prova", nullptr, nullptr);

	test.insert(Link("ciao", nullptr, nullptr));

	test.print_all();

}