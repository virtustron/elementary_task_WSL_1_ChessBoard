#pragma once

#include <cstring>

class InvalidChessBoardSizeException
{
public:
	InvalidChessBoardSizeException();
	InvalidChessBoardSizeException(const char* error_message, int size_value);

	char* get_error_message();
	int get_size_value();
	
private:
	char m_error_message[50];
	int m_size_value;
};

