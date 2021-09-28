#include <iostream>
#include "ChessBoardConsoleUI.hpp"

int main(int argc, char *argv[])
{
	//std::cout << "Hello Makefile!\n";
	std::cout << "special edit for gitignore testing\n";

	ChessBoardConsoleUI chessbouard_console_ui;
	chessbouard_console_ui.StartChessBoardDialog(argc, argv);

	return 0;
}