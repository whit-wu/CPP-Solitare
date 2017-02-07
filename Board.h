#pragma once
#include "Draw.h"
#include <windows.h>
#include <iostream>
#include <tchar.h>
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
class Board : public Draw {
public:
	Board();
	~Board();
	void DrawBoard();
	
	



};


