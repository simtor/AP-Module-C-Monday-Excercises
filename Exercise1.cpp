//Exercise 1: Quote a quote
#include <iostream>

int main() {
	std::string quote;
	std::string author;

	std::cout << "What is the quote? ";
	//std::cin >> quote;
	getline(std::cin, quote);

	std::cout << "Who said it? ";
	//std::cin >> author;
	getline(std::cin, author);

	std::cout << "\n" << author << " says: \"" << quote << "\"\n";

	return 0;
}
