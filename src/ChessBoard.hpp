#pragma once

#include "InvalidChessBoardSizeException.hpp"

class ChessBoard
{
public:
	ChessBoard();
	ChessBoard(int height, int width);

	void Present(char* chess_board[]);
private:
	int m_height;
	int m_width;

	bool IsSizeValid(int chessboard_size);
};

