#include <iostream>
#include <string>


bool is_palindrome(const std::string& s);

int main() {

	std::string test = "ciao";

	std::cout << test[1] << " " << test.length() << "\n";

	std::cout << "asdfdsa e' palindrome? " << is_palindrome("asdfdsa") << "\n";

	std::cout << "ciao e' palindrome? " << is_palindrome("ciao") << "\n";
}

bool is_palindrome(const std::string& s) {

	bool result = true;

	for (int i = 0; i < s.length()/2; i++) {

		if (s[i] != s[s.length() -1 - i]) {
			result = false;
		}

	}


	return result;

}