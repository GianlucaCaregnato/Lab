#include <iostream>
#include "Link.h"


int main() {

	Link* test = new Link("prova", nullptr, nullptr);

	test->print_all();

	test->insert(new Link("ciao", nullptr, nullptr));

	test->print_all();

}