#include "ChessBoard.hpp"

ChessBoard::ChessBoard()
{
	m_height = 1;
	m_width = 1;
}

ChessBoard::ChessBoard(int height, int width)
{
	if (IsSizeValid(height))
		m_height = height;
	else
		throw InvalidChessBoardSizeException("Invalid height value", height);

	if (IsSizeValid(width))
		m_width = width;
	else
		throw InvalidChessBoardSizeException("Invalid width value", width);
}

void ChessBoard::Present(char* chess_board[])
{
	char dark_square_symbol = '*';
	char light_square_symbol = ' ';
		
	for (int i = 0; i < m_height; i++)
	{
		for (int j = 0; j < m_width; j++)
		{
			if (j % 2 == 1)
			{
				if (i % 2 == 1)
					chess_board[i][j] = dark_square_symbol;
				else
					chess_board[i][j] = light_square_symbol;
			}
			else
			{
				if (i % 2 == 1)
					chess_board[i][j] = light_square_symbol;
				else
					chess_board[i][j] = dark_square_symbol;
			}
		}
	}
}


bool ChessBoard::IsSizeValid(int chessboard_size)
{
	if (chessboard_size < 1)
		return false;

	return true;
}

