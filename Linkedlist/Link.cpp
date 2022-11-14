#include "Link.h"

Link::Link(const std::string& v , Link* p, Link* s) :value{v}, prev{p}, succ{s} {}

Link* Link::insert(Link* n) {//inserisco n prima del nodo corrente

	n->succ = this;
	n->prev = this->prev;

	this->prev = n;

	return this;
}

Link* Link::add(Link* n) {

	n->prev = this;
	n->succ = this->succ;

	this->succ = n;

	return this;
}

Link* Link::erase(Link* n) {
		
	if (!n->succ && n->prev) 
		n->prev->succ = nullptr;
		
	if (!n->prev && n->succ) 
		n->succ->prev = nullptr;

	if (n->succ && n->prev) {
		n->prev->succ = n->succ;
		n->succ->prev = n->prev;
	}
	

	return n;
}

Link* Link::find(std::string v) {
	if (this->value == v) {
		return this;
	}


	Link* n = this;
	while (n->succ != nullptr) {
		n = n->succ;
		if (n->value == v) {
			return n;
		}
	}

	n = this;
	while (n->prev != nullptr) {
		n = n->prev;
		if (n->value == v) {
			return n;
		}
	}

	return nullptr;
}

Link* Link::advance(int i) {

	if (i >= 0) {

		Link* n = this->find_first();

		for (int j = 0; j < i; j++) {
			if (n) {
				n = n->succ;
			}
			else {
				return nullptr;
			}
		}

		return n;
	}


}

void Link::print_all() {

	Link* n = this->find_first();

	while (n) {

		std::cout << n->value << " ";

		n = n->succ;

	}

	std::cout << "\n";

}

void Link::print_this() {

	std::cout << this->value << "\n";

}

void Link::print_that(Link* n) {

	std::cout << n->value << "\n";

}

Link* Link::push_front(Link* n) {

	Link* first = this->find_first();

	first->insert(n);

	return n;
}

Link* Link::push_back(Link* n) {

	Link* last = this->find_last();

	last->add(n);

	return this;
}

Link* Link::pop_front() {

	return this->erase(this->find_first());

}

Link* Link::pop_back() {

	return this->erase(this->find_last());;

}

Link::~Link() {

	Link* n = this->find_first();

	while (n->succ) {
		n = n->succ;
		delete n->prev;
	}
	delete n;
}

Link* Link::find_first() {

	Link* first = this;

	while (first->prev) {

		first = first->prev;

	}

	return first;

}

Link* Link::find_last()
{
	Link* last = this;

	while (last->succ) {

		last = last->succ;

	}

	return last;
}




