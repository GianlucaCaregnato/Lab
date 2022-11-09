#include "Link.h"

Link::Link(const std::string& v , Link* p = nullptr, Link* s = nullptr) :value{v}, prev{p}, succ{s} {}

Link* Link::insert(Link n) {//inserisco n prima del nodo corrente

	n.succ = this;
	n.prev = this->prev;

	this->prev = &n;

	return this;
}

Link* Link::add(Link n) {

	n.prev = this;
	n.succ = this->succ;

	this->succ = &n;

	return this;
}

Link* Link::erase()
{
	this->prev->succ = this->succ;
	this->succ->prev = this->prev;

	return this;
}

Link* Link::find(std::string v)
{
	if (this->value == v) {
		return this;
	}


	Link n = *this;
	while (n.succ != nullptr) {
		n = *n.succ;
		if (n.value == v) {
			return &n;
		}
	}

	n = *this;
	while (n.prev != nullptr) {
		n = *n.prev;
		if (n.value == v) {
			return &n;
		}
	}

	return nullptr;
}


