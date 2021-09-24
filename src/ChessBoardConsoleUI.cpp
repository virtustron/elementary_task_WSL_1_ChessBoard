#include "ChessBoardConsoleUI.hpp"

void ChessBoardConsoleUI::StartChessBoardDialog(int argc, char* argv[])
{
	if (argc == 3)
	{
		// TODO: add validation (isdigit and so on)
		m_chessboard_height = atoi(argv[1]);
		m_chessboard_width = atoi(argv[2]);
	} 
	else 
	{
		ShowProgramInstructions();
		StartReadingChessboardParameters();
	}

	char** chess_board_string_presentation = new char*[m_chessboard_height];

	for (int i = 0; i < m_chessboard_height; i++)
		chess_board_string_presentation[i] = new char[m_chessboard_width];

	try
	{
		ChessBoard chess_board(m_chessboard_height, m_chessboard_width);
		chess_board.Present(chess_board_string_presentation);
		WriteChessBoard(chess_board_string_presentation, m_chessboard_height, m_chessboard_width);
	}
	catch (InvalidChessBoardSizeException size_exception)
	{
		std::cout << size_exception.get_error_message() << " " << size_exception.get_size_value() << "\n";
	}
}

void ChessBoardConsoleUI::ShowProgramInstructions()
{
	cout << "=== ChessBoard console application user manual ===\n";
	cout << "1. Enter chessboard HEIGHT value - positive integer number\n";
	cout << "2. Enter chessboard WIDTH value - positive integer number\n";
}

void ChessBoardConsoleUI::StartReadingChessboardParameters()
{
	cout << "Enter chessboard height:\n";
	cin >> m_chessboard_height;
	/* 
	if (!cin)				// or if(cin.fail())
	{
		// user didn't input a number
		cin.clear();		// reset failbit
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
		
		// TODO: replace with throw-operator (and create responsible exception class)
		std::cout << "Please enter a numeric value\n"; 
		m_chessboard_height = 1;
	}
	*/


	cout << "Enter chessboard width:\n";
	cin >> m_chessboard_width;

	/*
	if (!cin)				// or if(cin.fail())
	{
		// user didn't input a number
		cin.clear();		// reset failbit
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input

		// TODO: replace with throw-operator (and create responsible exception class)
		std::cout << "Please enter a numeric value\n";
		m_chessboard_width = 1;
	}
	*/
}

void ChessBoardConsoleUI::WriteChessBoard(char* chess_board_string[], const int chess_board_height, const int chess_board_width)
{
	for (int i = 0; i < chess_board_height; i++)
	{
		for (int j = 0; j < chess_board_width; j++)
		{
			cout << chess_board_string[i][j];
		}

		cout << "\n";
	}
}










