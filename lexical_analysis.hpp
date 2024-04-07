#pragma once
#include <string>
#include <cctype>
#include <algorithm>

namespace lexical_analysis {
	bool is_id(std::string str) {
		return str.size() > 0 &&
			(isalpha(str[0]) || str[0] == '_') &&
			std::all_of(str.begin()+1, str.end(), 
				[](char c) {
					return isalpha(c) || isdigit(c) || c == '_';
				}
		);
	}
	bool is_num(std::string str) {
		return str.size() > 0 &&
			std::ranges::all_of(str, isdigit);
	}
	bool is_real(std::string str) {
		auto e_ite = std::ranges::find(str, 'e');
		auto dot_ite = std::find(str.begin(), e_ite, '.');
		return str.begin() != e_ite &&
			std::all_of(str.begin(), dot_ite, isdigit) &&
			(dot_ite == str.end() || std::all_of(dot_ite + 1, e_ite, isdigit)) &&
			(e_ite == str.end() || std::all_of(e_ite + 1, str.end(), isdigit)) &&
			(dot_ite != e_ite);
	}
}