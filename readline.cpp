#include"readline.h"
std::string Readline::input()
{
	std::string input;
        std::getline(std::cin, input);
        return input;	
}
void Readline::coloredOutput(const std::string& text, const std::string& color)
{
	std::cout << "\x1b[" << color << "m" << text << "\x1b[0m";
}
void Readline::moveCursorLeft(int count)
{
	std::cout << "\x1b[" << count << "D";
}
void Readline::moveCursorRight(int count)
{
	std::cout << "\x1b[" << count << "C";
}
