#include "lexical_analysis.hpp"
#include <iostream>

int main() {
	using namespace lexical_analysis;
	std::cout << is_id("test0") << std::endl;
	std::cout << is_id("") << std::endl;
	std::cout << is_id("0test") << std::endl;
	std::cout << is_num("0test") << std::endl;
	std::cout << is_num("") << std::endl;
	std::cout << is_num("123") << std::endl;
	std::cout << is_real("123") << std::endl;
	std::cout << is_real("1.2") << std::endl;
	std::cout << is_real("e5") << std::endl;
	std::cout << is_real(".e5") << std::endl;
	return 0;
}