#pragma once
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

