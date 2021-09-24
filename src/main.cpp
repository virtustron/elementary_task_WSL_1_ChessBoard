#include <iostream>
#include "ChessBoardConsoleUI.hpp"

int main(int argc, char *argv[])
{
	ChessBoardConsoleUI chessbouard_console_ui;
	chessbouard_console_ui.StartChessBoardDialog(argc, argv);
	
	return 0;
}