#include "InvalidChessBoardSizeException.hpp"

InvalidChessBoardSizeException::InvalidChessBoardSizeException()
{
	strcpy(m_error_message, "No message!");
	m_size_value = 0;
}

InvalidChessBoardSizeException::InvalidChessBoardSizeException(const char* error_message, int size_value)
{
	strcpy(m_error_message, error_message);
	m_size_value = size_value;
}

char* InvalidChessBoardSizeException::get_error_message()
{
	return m_error_message;
}

int InvalidChessBoardSizeException::get_size_value()
{
	return m_size_value;
}
