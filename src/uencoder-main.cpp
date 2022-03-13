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


std::string word_guess(const std::string answer, std::string player_input)
{
	std::string result;
	for (unsigned int i = 0; i < player_input.length(); ++i) {

		char player_char {player_input[i]};

		int pos_in_answer {-1};
		for (unsigned int j = 0; j < answer.length(); ++j) {
			char answer_char {answer[j]};
			if (player_char == answer_char)
			{
				pos_in_answer = j;
				break;
			}
		}


		if (pos_in_answer == i) {
			result += "1";
		} else if (pos_in_answer>=0) {
			result += "X";
		} else {
			result += "-";
		}
	}
	return result;
}

int main() {

	std::cout << "Please select target function: \n"
			" a : Print all chars\n"
			" b : Print escape sequences \n"
			" c : Print text frame\n"
			" d : Print text sign\n"
			" e : Word guess\n"
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

	if (func_name == "e")
	{
		std::string answer;
		std::string user_input;
		std::cout << "Enter the answer word:";
		std::cin >> answer;
		std::cout << "Enter your guess:";
		std::cin >> user_input;

		std::cout << word_guess(answer, user_input) << "\n";
	}

}
