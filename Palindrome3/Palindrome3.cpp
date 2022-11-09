#include <iostream>

bool is_palindrome(const char* first, const char* last);

int main() {

	std::string test = "anna";

	char* first = &test[0];

	char* last = &test[3];

	std::cout << (void*)first[0] << " " << (void*)last[-3] << "\n";

	is_palindrome(first, last);

}

bool is_palindrome(const char* first, const char* last) {

	std::cout << (int)(void*)last << " " << (int)(void*)first << " " << sizeof(char) << "\n";

	int length = ((int)(void*)last - (int)(void*)first) / sizeof(char) + 1;

	std::cout << length << "\n";

	for (int i = 0; i < length/2; i++) {
		std::cout << first[i] << " " << last[-i] << "\n";
		if (first[i] != last[-i]) {

			std::cout << first[i] << " " << last[-i] << " ";
			return false;
		}

	}


	return true;
}