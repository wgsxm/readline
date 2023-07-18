#ifndef READLINE_H
#define READLINE_H
#include<iostream>
#include<string>
class Readline
{
public:
	static std::string input();
	static void coloredOutput(const std::string&, const std::string&);
	static void moveCursorLeft(int);
	static void moveCursorRight(int);
};
#endif
