#include <iostream>
#include "Link.h"


int main() {

	Link* test = new Link("prova");

	test->print_all();

	test->insert(new Link("ciao"));

	test->print_all();

	test->add(new Link("Gian"));

	test->print_all();

}