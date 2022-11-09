#include "Link.h"

Link::Link(const std::string& v, Link* p, Link* s) :value{ v }, prev{ p }, succ{ s } {}

Link* Link::insert(Link n) {//inserisco n prima del nodo corrente

	n.succ = this;
	n.prev = this->prev;

	this->prev = &n;

	return this;
}


