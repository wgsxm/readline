#include"readline.h"
int main()
{
    Readline::coloredOutput("Hello, ", "31"); // 红色输出
    Readline::coloredOutput("world!", "32");  // 绿色输出
    std::cout << std::endl;

    // 输入示例
    std::cout << "Please enter your name: ";
    std::string name = Readline::input();
    std::cout << "Hello, " << name << "!" << std::endl;

    // 光标移动示例
    std::cout << "Moving cursor left 3 positions..." << std::endl;
    Readline::moveCursorLeft(3);
    std::cout << ">>>";

    std::cout << std::endl;
    return 0;
}
