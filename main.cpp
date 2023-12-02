#include <iostream>
#include <fstream>
#include <regex>

int main()
{
	std::ifstream file("text.txt");
	std::string line;
	std::smatch match;
	std::regex need_find("^([a-zA-Z]+)\\1$");

	if (!file.is_open())
	{
		std::cout << "File not found\n";
		return 0;
	}

	while (std::getline(file, line))
	{
		if (std::regex_search(line, need_find))
		{
			std::cout << line << '\n';
		}
	}
}
