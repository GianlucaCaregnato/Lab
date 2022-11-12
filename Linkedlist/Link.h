#ifndef link_h
#define link_h
#include <iostream>

class Link
{
public:

	Link(const std::string& v, Link* p, Link* s);
	Link* insert(Link*);
	Link* add(Link*);
	Link* erase();
	Link* find(std::string);
	Link* advance(int);
	void print_all();
	
	Link operator = (Link const& obj);



private:

	std::string value;
	Link* prev;
	Link* succ;

};

#endif 