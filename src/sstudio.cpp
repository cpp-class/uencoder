#include <iostream>
#include <string>

void print_all_charachters()
{
	std::cout << "Print all charachters: \n";
	for (int cnt = 0; cnt < 255; ++cnt) {
		char x = cnt;

		std::cout << "Char [" << cnt << "] = " << x << "\n";
	}
}

void print_some_escape_chars()
{
	std::string my_string {"Escape sequences: \" \' \? \n \\ \r \t Some text \x5c" "  "};

	std::cout << my_string << "\n";
}

int main() {

	std::cout << "Please select target function: \n"
			" a : Print all chars\n"
			" b : Print escape sequences \n"
			":";
	std::string func_name;
	std::cin >> func_name;

	if (func_name == "a")
	{
		print_all_charachters();
	}

	if (func_name == "b")
	{
		print_some_escape_chars();
	}
}
