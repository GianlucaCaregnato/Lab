#include <iostream>

bool is_palindrome(const char s[], int length);

int main() {

	char test1[4] = { 'c','i','a','o' };

	char test2[4] = { 'a','n','n','a' };


	std::cout << "ciao e' palindrome? " << is_palindrome(test1 , 4) << "\n";

	std::cout << "anna e' palindrome? " << is_palindrome(test2 , 4) << "\n";
}

bool is_palindrome(const char s[], int length) {

	bool result = true;

	for (int i = 0; i < length; i++) {

		if (s[i] != s[length - 1 - i]) {
			result = false;
		}

	}

	return result;

}