#include <iostream>
#include <absl/strings/str_join.h>

int main(int argc, char* argv[]) {
	std::vector<std::string> v = {"foo","bar","baz"};
	std::string s = absl::StrJoin(v, "-");

	std::cout << "Joined string: " << s << "\n";
	return 0;
}
