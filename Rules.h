#pragma once
#include "Draw.h"
#include <string>
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
class Rules: public Draw
{
public:
	Rules();
	~Rules();
	bool NeighborCards(string card1, string card2);
	bool EqualsTen(string card1, string card2);
	void CardToBeDiscarded(string cell1);
	bool BoardFull();
	void SendTo(string cardObject);
	int AssignCellValue(string cardObject);
	void ClearCards(string cell1, string cell2);
	bool MoveOutput(int x, int y,  int width, int height);
	bool PairsLeft();
private:
	// Member variables that hold cell values
	int A1, B1, C1, D1,
		A2, B2, C2, D2,
		A3, B3, C3, D3,
		A4, B4, C4, D4;
};

