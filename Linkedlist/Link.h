#ifndef link_h
#define link_h
#include <iostream>

class Link
{
public:

	Link(const std::string& v, Link* p = nullptr, Link* s = nullptr);
	Link* insert(Link*);
	Link* add(Link*);
	Link* erase();
	Link* find(std::string);
	Link* advance(int);
	void print_all();
	void print_this();




private:

	std::string value;
	Link* prev;
	Link* succ;

};

#endif 