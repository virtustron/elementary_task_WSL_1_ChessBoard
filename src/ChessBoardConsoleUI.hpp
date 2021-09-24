#pragma once
#include <iostream>
#include "ChessBoard.hpp"

using namespace std;

class ChessBoardConsoleUI
{
public:
	void StartChessBoardDialog(int argc, char* argv[]);
	void ShowProgramInstructions();
	void StartReadingChessboardParameters();
	
private:
	int m_chessboard_height;
	int m_chessboard_width;

	void WriteChessBoard(char* chess_board_string[], const int chess_board_height, const int chess_board_width);
};



