#include <iostream>

void f_illegal();

void print_array_lenght(double b[]);

void print_reference(const int& i, const double& d);

void print_pointer(int* i, double* d);


int main() {

	//esercizio 1

	int a[5] = { 1,2,3,4,5 };

	int* p = &a[2];

	std::cout << "indirizzo memoria puntato da a[2]: " << &a[2] << " valore all'interno dell'indirizzo : " << a[2] << "\n";

	std::cout << "memorizzo l'indirizzo di memoria nel puntatore p: " << p << " il valore all'interno sarà sempre: " << *p << "\n";

	std::cout << "proviamo ad usare l'operatore [] con il puntatore: " << p[0] << " " << p[2] << " " << p[-1] << "\n";

	f_illegal();

	//esercizio 2

	const int lenght = 5;

	double b[lenght] = { 1.1,1.2,1.3,1.4,1.5 };

	std::cout << "dimensione in byte di tutto l'array: " << sizeof(b) << "dimensione del singolo elemento " << sizeof(b[0]) << "\n";

	print_array_lenght(b);

	//esercizio 3

	int i = 1;
	double d = 1.1;

	print_reference(i, d);
	print_pointer(&i, &d);

}

void f_illegal() {

	int a[5] = { 1,2,3,4,5 };

	int* p = &a[2];

	std::cout << "proviamo a leggere fuori dai limiti dell'array: " << p[3] << "\n";

	//p[3] = 6;

	//std::cout << "proviamo a scrivere fuori dai limiti dell'array: " << p[3] << "\n";

	//errore in esecuzione
}

void print_array_lenght(double b[]) {

	int l = sizeof(b) / sizeof(b[0]);

	//viene passato un puntatore b e quindi la funzione sizeof non trova più la dimensione di tutto l'array ma solo
	//la dimensione del puntatore, non si può quindi sapere la lunghezza dell'array dalla funzione

	std::cout << "La dimensione dell'array e': " << l << "\n";

	std::cout << b[0] << " " << b[1] << " " << b[2] << "\n";

	//e' però possibile andare a vedere tutti gli elementi dell'array usando il puntatore e l'operatore []
}

void print_reference(const int& i, const double& d) {

	std::cout << i << " " << d << "\n";

}

void print_pointer(int* i, double* d) {

	std::cout << *i << " " << *d << "\n";

}