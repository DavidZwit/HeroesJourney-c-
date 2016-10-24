#include "FastWrite.h"

void FastWrite::sayChoice(std::string COne, std::string CTwo)
{
	std::string choiceOne = COne;
	std::string choiceTwo= CTwo;

	std::cout << "Do you want to do " << choiceOne << " or " << choiceTwo << std::endl;
	getchar();
	std::cout << "1 to " << choiceOne << std::endl;
	std::cout << "or choose 2 for " << choiceTwo << std::endl;
}

int FastWrite::getInt() {
	int in;
	GIN(in);
	return in;
}

char getChar() {
	char in;
	GIN(in);
	return in;
}

std::string FastWrite::getString() {
	std::string in;
	GIN(in);
	return in;
}