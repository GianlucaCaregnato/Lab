#include <exception>
#include <string>
class MyVector {

public:

	MyVector(int);

	double operator [] (int i) const;

	double& operator [] (int i);

	void safe_set(int i, double elem);

	double safe_get(int i);

	~MyVector();

private:

	int length;

	double* arr;

};


class Index_out_bound_exception : std::exception {

public:

	Index_out_bound_exception(std::string t) : text{ t } {};

	std::string printError() {
		return text;
	}

private:

	std::string text;
};