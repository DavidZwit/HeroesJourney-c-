#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

//Player out
#define SAYPLAYER(text) std::cout << playerName << ": " << text << std::endl << std::endl; getchar();
#define THINKPLAYER(thought) std::cout << playerName << ", " << std::en << std:endl << std::endl; getchar();
#define PNAME std::cout << playerName;

//Other out
#define SAYOTHER(name, text) std::cout << name << ": " << text << std::endl << std::endl; getchar();
#define SAYNAR(text) std::cout << "Narrator: " << text << std::endl; getchar();

//General say
#define SAY(x) std::cout << x << std::endl << std::endl; getchar();
#define SAYTWO(x, var) std::cout << x << var << std::endl << std::endl; getchar();
#define SAYTHREE(x, var, y) std::cout << x << var << y << std::endl << std::endl; getchar();
#define SAYFOUR(x, var, y, z) std::cout << x << var << y << z << std::endl << std::endl;  getchar();
#define SCHOICE(x, y) FastWrite::sayChoice(x, y);

//Get values
#define GIN(x) std::cin >> x;
#define GINT FastWrite::getInt();
#define GCHAR FastWrite::getChar();
#define GSTRING FastWrite::getString();


class FastWrite{
public:
	static void sayChoice(std::string COne, std::string CTwo);
	static int getInt();
	static char getChar();
	static std::string getString();
};


