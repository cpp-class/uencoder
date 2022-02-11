#include <iostream>
#include <string>


void print_horizontal_line(int num_chars)
{
	for (int i = 0; i < num_chars; ++i) {
		std::cout << '#';
	}
}

void print_text_frame(std::string name)
{
	int name_size {name.length()};
	int frame_width {name_size + 4};


	print_horizontal_line(frame_width);

	std::cout << "\n# "<< name << " #\n";

	print_horizontal_line(frame_width);

	std::cout << "\n";

}

void print_text_sign(std::string name)
{
	print_horizontal_line(5);
	std::cout << "\n";

	for (unsigned int i = 0; i < name.length(); ++i) {
		std::cout << "# "<<name[i] << " #\n";
	}

	print_horizontal_line(5);
	std::cout << "\n";
}

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
			" c : Print text frame\n"
			" d : Print text sign\n"
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

	if (func_name == "c")
	{
		std::string text;
		std::cout << "Please enter a text:";
		std::cin >> text;

		print_text_frame(text);
	}

	if (func_name == "d")
	{
		std::string text;
		std::cout << "Please enter a text:";
		std::cin >> text;

		print_text_sign(text);
	}

}
