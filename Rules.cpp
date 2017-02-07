#include "stdafx.h"
#include "Rules.h"


Rules::Rules()
{
	A1 = 0, A2 = 0, A3 = 0, A4 = 0,
	B1 = 0, B2 = 0, B3 = 0, B4 = 0,
	C1 = 0, C2 = 0, C3 = 0, C4 = 0,
	D1 = 0, D2 = 0, D3 = 0, D4 = 0;
}


Rules::~Rules()
{
}

bool Rules::NeighborCards(string card1, string card2) {
	//checks to see if card 1 and card 2 are next to each other.  If so, returns true.
	//If not, returns false.
	// checking if card1 is A1
	if (card1 == "A1") {
		if (card2 == "B1" || card2 == "B2" || card2 == "A2") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is A2
	if (card1 == "A2") {
		if (card2 == "A1" || card2 == "B1" || card2 == "B2" || card2 == "B3" || card2 == "A3") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is A3
	if (card1 == "A3") {
		if (card2 == "A2" || card2 == "B2" || card2 == "B3" || card2 == "B4" || card2 == "A4") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is A4
	if (card1 == "A4") {
		if (card2 == "A3" || card2 == "B3" || card2 == "B4") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is B1
	if (card1 == "B1") {
		if (card2 == "A1" || card2 == "A2" || card2 == "B2" || card2 == "C2" || card2 == "C1") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is B2
	if (card1 == "B2") {
		if (card2 == "B1" || card2 == "A1" || card2 == "A2" || card2 == "A3" || card2 == "B3" || card2 == "C3"
			|| card2 == "C2" || card2 == "C1" ) {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is B3
	if (card1 == "B3") {
		if (card2 == "B2" || card2 == "C2" || card2 == "C3" || card2 == "C4" || card2 == "B4" || card2 == "A4"
			|| card2 == "A3" || card2 == "A2") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is B4
	if (card1 == "B4") {
		if (card2 == "A4" || card2 == "A3" || card2 == "B3" || card2 == "C3" || card2 == "C4") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is C1
	if (card1 == "C1") {
		if (card2 == "B1" || card2 == "B2" || card2 == "C2" || card2 == "D2" || card2 == "D1") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is C2
	if (card1 == "C2") {
		if (card2 == "C1" || card2 == "B1" || card2 == "B2" || card2 == "B3" || card2 == "C3" || card2 == "D3"
			|| card2 == "D2" || card2 == "D1") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is C3
	if (card1 == "C3") {
		if (card2 == "C2" || card2 == "B2" || card2 == "B3" || card2 == "B4" || card2 == "C4" || card2 == "D4"
			|| card2 == "D3" || card2 == "D2") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is C4
	if (card1 == "C4") {
		if (card2 == "B4" || card2 == "B3" || card2 == "C3" || card2 == "D4" || card2 == "D3") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is D1
	if (card1 == "D1") {
		if (card2 == "C1" || card2 == "C2" || card2 == "D2") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is D2
	if (card1 == "D2") {
		if (card2 == "D1" || card2 == "C1" || card2 == "C2" || card2 == "C3" || card2 == "D3") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is D3
	if (card1 == "D3") {
		if (card2 == "D2" || card2 == "C2" || card2 == "C3" || card2 == "C4" || card2 == "D4") {
			return true;
		}
		else {
			return false;
		}
	}

	// checking if card 1 is D4
	if (card1 == "D4") {
		if (card2 == "D3" || card2 == "C3" || card2 == "C4" ) {
			return true;
		}
		else {
			return false;
		}
	}
}

bool Rules::EqualsTen(string cell1, string cell2) {
	// this will determine if the inputed cells equal 10.  If so, returns true.  If not, returns false.
		int cellVal1 = 0, cellVal2 = 0;
		//cell 1
		size_t cell1A1 = cell1.find("A1");
		size_t cell1A2 = cell1.find("A2");
		size_t cell1A3 = cell1.find("A3");
		size_t cell1A4 = cell1.find("A4");
		size_t cell1B1 = cell1.find("B1");
		size_t cell1B2 = cell1.find("B2");
		size_t cell1B3 = cell1.find("B3");
		size_t cell1B4 = cell1.find("B4");
		size_t cell1C1 = cell1.find("C1");
		size_t cell1C2 = cell1.find("C2");
		size_t cell1C3 = cell1.find("C3");
		size_t cell1C4 = cell1.find("C4");
		size_t cell1D1 = cell1.find("D1");
		size_t cell1D2 = cell1.find("D2");
		size_t cell1D3 = cell1.find("D3");
		size_t cell1D4 = cell1.find("D4");
		//cell2
		size_t cell2A1 = cell2.find("A1");
		size_t cell2A2 = cell2.find("A2");
		size_t cell2A3 = cell2.find("A3");
		size_t cell2A4 = cell2.find("A4");
		size_t cell2B1 = cell2.find("B1");
		size_t cell2B2 = cell2.find("B2");
		size_t cell2B3 = cell2.find("B3");
		size_t cell2B4 = cell2.find("B4");
		size_t cell2C1 = cell2.find("C1");
		size_t cell2C2 = cell2.find("C2");
		size_t cell2C3 = cell2.find("C3");
		size_t cell2C4 = cell2.find("C4");
		size_t cell2D1 = cell2.find("D1");
		size_t cell2D2 = cell2.find("D2");
		size_t cell2D3 = cell2.find("D3");
		size_t cell2D4 = cell2.find("D4");

		// assign cellVal1
		if (cell1A1 != string::npos) {
			cellVal1 = A1;
		}
		if (cell1A2 != string::npos) {
			cellVal1 = A2;
		}
		if (cell1A3 != string::npos) {
			cellVal1 = A3;
		}
		if (cell1A4 != string::npos) {
			cellVal1 = A4;
		}
		if (cell1B1 != string::npos) {
			cellVal1 = B1;
		}
		if (cell1B2 != string::npos) {
			cellVal1 = B2;
		}
		if (cell1B3 != string::npos) {
			cellVal1 = B3;
		}
		if (cell1B4 != string::npos) {
			cellVal1 = B4;
		}
		if (cell1C1 != string::npos) {
			cellVal1 = C1;
		}
		if (cell1C2 != string::npos) {
			cellVal1 = C2;
		}
		if (cell1C3 != string::npos) {
			cellVal1 = C3;
		}
		if (cell1C4 != string::npos) {
			cellVal1 = C4;
		}
		if (cell1D1 != string::npos) {
			cellVal1 = D1;
		}
		if (cell1D2 != string::npos) {
			cellVal1 = D2;
		}
		if (cell1D3 != string::npos) {
			cellVal1 = D3;
		}
		if (cell1D4 != string::npos) {
			cellVal1 = D4;
		}

		// assign cellVal2
		if (cell2 != "") {
			if (cell2A1 != string::npos) {
				cellVal2 = A1;
			}
			if (cell2A2 != string::npos) {
				cellVal2 = A2;
			}
			if (cell2A3 != string::npos) {
				cellVal2 = A3;
			}
			if (cell2A4 != string::npos) {
				cellVal2 = A4;
			}
			if (cell2B1 != string::npos) {
				cellVal2 = B1;
			}
			if (cell2B2 != string::npos) {
				cellVal2 = B2;
			}
			if (cell2B3 != string::npos) {
				cellVal2 = B3;
			}
			if (cell2B4 != string::npos) {
				cellVal2 = B4;
			}
			if (cell2C1 != string::npos) {
				cellVal2 = C1;
			}
			if (cell2C2 != string::npos) {
				cellVal2 = C2;
			}
			if (cell2C3 != string::npos) {
				cellVal2 = C3;
			}
			if (cell2C4 != string::npos) {
				cellVal2 = C4;
			}
			if (cell2D1 != string::npos) {
				cellVal2 = D1;
			}
			if (cell2D2 != string::npos) {
				cellVal2 = D2;
			}
			if (cell2D3 != string::npos) {
				cellVal2 = D3;
			}
			if (cell2D4 != string::npos) {
				cellVal2 = D4;
			}
		}
		// checks if equals 10
		if ((cellVal1 + cellVal2) == 10) {
			CardToBeDiscarded(cell1);
			ClearCards(cell1, cell2);
			}
		else {
			return false;
		}
	
	return true;
}



bool Rules::BoardFull() {
	// Checks if board is full.  If full, returns true.  If not, returns false.
	if (A1 != 0 && B1 != 0 && C1 != 0 && D1 != 0 && 
		A2 != 0 && B2 != 0 && C2 != 0 && D2 != 0 &&
		A3 != 0 && B3 != 0 && C3 != 0 && D3 != 0 &&
		A4 != 0 && B4 != 0 && C4 != 0 && D4 != 0) {
		return true;
	}
	else {
		return false;
	}
}

void Rules::SendTo(string cardObject) {  
	//sends card value and output to cell on board
	string myLoc;
	gotoxy(55, 19);
	cout << "   ";
	gotoxy(55, 19);
	cout << cardObject;
	bool isPassed = false;
	while (isPassed == false) {
		gotoxy(81, 10);
		cout << "Enter Location (All Caps):            " << endl;
		gotoxy(81, 11);
		cout << "  ";  // impacts deck pile appearance?
		gotoxy(81, 11);
		cin >> myLoc;
		if (myLoc == "A1"  && A1 == 0) {
			gotoxy(32, 5);
			cout << cardObject;
			A1 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "A2" && A2 == 0) {
			gotoxy(32, 10);
			cout << cardObject;
			A2 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "A3" && A3 == 0) {
			gotoxy(32, 15);
			cout << cardObject;
			A3 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "A4" && A4 == 0) {
			gotoxy(32, 20);
			cout << cardObject;
			A4 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "B1" && B1 == 0) {
			gotoxy(37, 5);
			cout << cardObject;
			B1 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "B2" && B2 == 0) {
			gotoxy(37, 10);
			cout << cardObject;
			B2 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "B3" && B3 == 0) {
			gotoxy(37, 15);
			cout << cardObject;
			B3 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "B4" && B4 == 0) {
			gotoxy(37, 20);
			cout << cardObject;
			B4 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "C1" && C1 == 0) {
			gotoxy(42, 5);
			cout << cardObject;
			C1 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "C2" && C2 == 0) {
			gotoxy(42, 10);
			cout << cardObject;
			C2 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "C3" && C3 == 0) {
			gotoxy(42, 15);
			cout << cardObject;
			C3 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "C4" && C4 == 0) {
			gotoxy(42, 20);
			cout << cardObject;
			C4 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "D1" && D1 == 0) {
			gotoxy(47, 5);
			cout << cardObject;
			D1 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "D2" && D2 == 0) {
			gotoxy(47, 10);
			cout << cardObject;
			D2 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "D3" && D3 == 0) {
			gotoxy(47, 15);
			cout << cardObject;
			D3 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		if (myLoc == "D4" && D4 == 0) {
			gotoxy(47, 20);
			cout << cardObject;
			D4 = AssignCellValue(cardObject);
			isPassed = true;
			break;
		}
		else
			gotoxy(81, 10);
			cout << "Cell taken or value invalid. Try again." << endl;
			gotoxy(81, 11);
			system("Pause");
			gotoxy(81, 11);
			cout << "                               ";
			continue;
	}
}

int Rules::AssignCellValue(string CardObject) {  // Assigns a value to each cell.
	int cellValue = 0;
	size_t foundAce = CardObject.find("A");
	size_t found2 = CardObject.find("2");
	size_t found3 = CardObject.find("3");
	size_t found4 = CardObject.find("4");
	size_t found5 = CardObject.find("5");
	size_t found6 = CardObject.find("6");
	size_t found7 = CardObject.find("7");
	size_t found8 = CardObject.find("8");
	size_t found9 = CardObject.find("9");
	size_t found10 = CardObject.find("10");
	size_t foundJ = CardObject.find("J");
	size_t foundQ = CardObject.find("Q");
	size_t foundK = CardObject.find("K");

	if (foundAce != string::npos) {
		return 1;
	}
	if (found2 != string::npos) {
		return 2;
	}
	if (found3 != string::npos) {
		return 3;
	}
	if (found4 != string::npos) {
		return 4;
	}
	if (found5 != string::npos) {
		return 5;
	}
	if (found6 != string::npos) {
		return 6;
	}
	if (found7 != string::npos) {
		return 7;
	}
	if (found8 != string::npos) {
		return 8;
	}
	if (found9 != string::npos) {
		return 9;
	}
	if (found10 != string::npos) {
		return 10;
	}
	if (foundJ != string::npos) {
		return 11;
	}
	if (foundQ != string::npos) {
		return 12;
	}
	if (foundK != string::npos) {
		return 13;
	}

	return cellValue;  // do I really need this?
}

void Rules::ClearCards(string cell1, string cell2) {
	// Clears good cells
	if (cell1 == "A1" || cell2 == "A1") {
		A1 = 0;
		gotoxy(32, 5);
		cout << "   ";
	}
	if (cell1 == "A2" || cell2 == "A2") {
		A2 = 0;
		gotoxy(32, 10);
		cout << "   ";
	}
	if (cell1 == "A3" || cell2 == "A3") {
		A3 = 0;
		gotoxy(32, 15);
		cout << "   ";
	}
	if (cell1 == "A4" || cell2 == "A4") {
		A4 = 0;
		gotoxy(32, 20);
		cout << "   ";
	}
	if (cell1 == "B1" || cell2 == "B1") {
		B1 = 0;
		gotoxy(37, 5);
		cout << "   ";
	}
	if (cell1 == "B2" || cell2 == "B2") {
		B2 = 0;
		gotoxy(37, 10);
		cout << "   ";
	}
	if (cell1 == "B3" || cell2 == "B3") {
		B3 = 0;
		gotoxy(37, 15);
		cout << "   ";
	}
	if (cell1 == "B4" || cell2 == "B4") {
		B4 = 0;
		gotoxy(37, 20);
		cout << "   ";
	}
	if (cell1 == "C1" || cell2 == "C1") {
		C1 = 0;
		gotoxy(42, 5);
		cout << "   ";
	}
	if (cell1 == "C2" || cell2 == "C2") {
		C2 = 0;
		gotoxy(42, 10);
		cout << "   ";
	}
	if (cell1 == "C3" || cell2 == "C3") {
		C3 = 0;
		gotoxy(42, 15);
		cout << "   ";
	}
	if (cell1 == "C4" || cell2 == "C4") {
		C4 = 0;
		gotoxy(42, 20);
		cout << "   ";
	}
	if (cell1 == "D1" || cell2 == "D1") {
		D1 = 0;
		gotoxy(47, 5);
		cout << "   ";
	}
	if (cell1 == "D2" || cell2 == "D2") {
		D2 = 0;
		gotoxy(47, 10);
		cout << "   ";
	}
	if (cell1 == "D3" || cell2 == "D3") {
		D3 = 0;
		gotoxy(47, 15);
		cout << "   ";
	}
	if (cell1 == "D4" || cell2 == "D4") {
		D4 = 0;
		gotoxy(47, 20);
		cout << "   ";
	}


}

void Rules::CardToBeDiscarded(string cell1) {
	//This funtion reads the output of a card to be discarded and prints it to the discard box.
	if (cell1 == "A1") {
		MoveOutput(30, 2, 6, 6);
	}
	if (cell1 == "A2") {
		MoveOutput(30, 7, 6, 6);
	}
	if (cell1 == "A3") {
		MoveOutput(30, 12, 6, 6);
	}
	if (cell1 == "A4") {
		MoveOutput(30, 17, 6, 6);
	}
	if (cell1 == "B1") {
		MoveOutput(35, 2, 6, 6);
	}
	if (cell1 == "B2") {
		MoveOutput(35, 7, 6, 6);
	}
	if (cell1 == "B3") {
		MoveOutput(35, 12, 6, 6);
	}
	if (cell1 == "B4") {
		MoveOutput(35, 17, 6, 6);
	}
	if (cell1 == "C1") {
		MoveOutput(40, 2, 6, 6);
	}
	if (cell1 == "C2") {
		MoveOutput(40, 7, 6, 6);
	}
	if (cell1 == "C3") {
		MoveOutput(40, 12, 6, 6);
	}
	if (cell1 == "C4") {
		MoveOutput(40, 17, 6, 6);
	}
	if (cell1 == "D1") {
		MoveOutput(45, 2, 6, 6);
	}
	if (cell1 == "D2") {
		MoveOutput(45, 7, 6, 6);
	}
	if (cell1 == "D3") {
		MoveOutput(45, 12, 6, 6);
	}
	if (cell1 == "D4") {
		MoveOutput(45, 17, 6, 6);
	}


}

bool Rules::MoveOutput(int x, int y, int width, int height) {
	// when called, moves the output to the discard pile
	int new_x = 21;  // CHANGE COORDS SO THAT THEY ARE IN PLACE OF DISCARD PILE
	int new_y = 2;
	HANDLE     hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PCHAR_INFO buffer = new CHAR_INFO[width * height];
	COORD      buffer_size = { width, height };
	COORD      buffer_index = { 0, 0 };  // read/write rectangle has upper-right corner at upper-right corner of buffer
	SMALL_RECT read_rect = { x,     y,     x + width - 1, y + height - 1 };
	SMALL_RECT write_rect = { new_x, new_y, new_x + width - 1, new_y + height - 1 };

	bool result = ReadConsoleOutput(hStdOut, buffer, buffer_size, buffer_index, &read_rect)
		&& WriteConsoleOutput(hStdOut, buffer, buffer_size, buffer_index, &write_rect);

	delete[] buffer;

	return result;
}

bool Rules::PairsLeft() {
	//checks if each cell adds to ten with neighboring pair of if cell itself contains 10
	if (A1 + B1 == 10 || A1 + B2 == 10 || A1 + A2 == 10 || A1 == 10 ||
		A2 + B1 == 10 || A2 + B2 == 10 || A2 + B3 == 10 || A2 + A3 == 10 || A2 == 10 ||
		A3 + B2 == 10 || A3 + B3 == 10 || A3 + B4 == 10 || A3 + A4 == 10 || A3 == 10 ||
		A4 + B3 == 10 || A4 + B4 == 10 || A4 == 10 || B1 + B2 == 10 || B1 + C2 == 10 || 
		B1 + C1 == 10 || B1 == 10 || B2 + B3 == 10 || B2 + C3 == 10 || B2 + C2 == 10 || 
		B2 + C1 == 10 || B2 == 10 || B3 + C2 == 10 || B3 + C3 == 10 || B3 + C4 == 10 || 
		B3 + B4 == 10 || B3 == 10 || B4 + C3 == 10 || B4 + C4 == 10 || B4 == 10 ||
		C1 + C2 == 10 || C1 + D2 == 10 || C1 + D1 == 10 || C1 == 10 || C2 + C3 == 10 || 
		C2 + D3 == 10 || C2 + D2 == 10 || C2 + D1 == 10 || C2 == 10 || C3 + C4 == 10 || 
		C3 + D4 == 10 || C3 + D3 == 10 || C3 + D2 == 10 || C3 == 10 || C4 + D3 == 10 ||
		C4 + D4 == 10 || C4 == 10 || D1 + D2 == 10 || D1 == 10 || D2 + D3 == 10 || D2 == 10 ||
		D3 + D4 == 10 || D3 == 10 || D4 == 10)
	{
		return true;
	}
	else {
		return false;
	}

	
}