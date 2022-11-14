#include <iostream>
#include "Link.h"


int main() {

	Link* test = new Link("prova");

	test->print_all();

	test->insert(new Link("ciao"));

	test->print_all();

	test->add(new Link("Gian"));

	test->print_all();

	test->print_this();

	test->print_that(test->find("Gian"));

	test->print_that(test->find("ciao"));

	test->print_that(test->advance(2));

	test->erase(test->find("ciao"));

	test->print_all();

	test->insert(new Link("ciao"));

	test->erase(test->find("prova"));

	test->print_all();

	test->erase(test->find("Gian"));

	test->print_all();

	//testiamo anche le funzioni pop e push

	test = new Link("1");
	test->push_back(new Link("2"));
	test->push_back(new Link("3"));
	test->print_all();
	test->pop_back();
	test->print_all();
	test->push_front(new Link("0.9"));
	test->print_all();
	test->pop_front();
	test->print_all();

}