#ifndef link_h
#define link_h
#include <iostream>

class Link
{
public:

	Link(const std::string& v, Link* p = nullptr, Link* s = nullptr); //testato
	Link* insert(Link*); //testato
	Link* add(Link*); //testato
	Link* erase(Link*); //testato
	Link* find(std::string); //testato
	Link* advance(int); //testato
	void print_all(); //testato
	void print_this(); //extra per test
	void print_that(Link*); //extra per test

	Link* push_front(Link*);
	Link* push_back(Link*);
	Link* pop_front();
	Link* pop_back();

	~Link();



private:

	std::string value;
	Link* prev;
	Link* succ;

	Link* find_first(); //trova il primo valore della lista (utile per varie funzioni)
	Link* find_last();
};

#endif 