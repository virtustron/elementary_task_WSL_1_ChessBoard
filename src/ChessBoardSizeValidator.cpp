#include "ChessBoardSizeValidator.hpp"

bool ChessBoardSizeValidator::IsValid(int height_or_width)
{
	if (height_or_width < 1)
		return false;
}