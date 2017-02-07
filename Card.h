#pragma once

#include <string>
#include <iostream>
#include <locale>
#include "Board.h"
#include <stdio.h>
#include <ctype.h>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::toupper;

class Card: public Board
{
public:

	Card(string cardFace, string cardSuit);
	string Print() const;
	Card();
	~Card();
private:
	string face;
	string suit;

};

