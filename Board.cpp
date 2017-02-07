// Class that draws board onto console window
#include "stdafx.h"
#include "Board.h"


Board::Board()
	
{
	
}

void Board::DrawBoard() {
	// Center main board
	const char graybar = '\xB2';
	int x = 0, y = 0;
	for (x = 0; x<80; x++)    // vertical borders
	{
		y = 0;
		setxychar(x, y, &graybar, 1);
		y = 25;
		setxychar(x, y, &graybar, 1);


	}


	for (y = 1; y<26; y++)    // horizontal borders
	{
		x = 0;
		setxychar(x, y, &graybar, 1);
		x = 79;
		setxychar(x, y, &graybar, 1);
	}
	
	//playable board
	for (x = 30; x < 51; x++) { //Vertical
		y = 2;
		setxychar(x, y, &graybar, 1);
		y = 7;
		setxychar(x, y, &graybar, 1);
		y = 12;
		setxychar(x, y, &graybar, 1);
		y = 17;
		setxychar(x, y, &graybar, 1);
		y = 22;
		setxychar(x, y, &graybar, 1);
	}

	for (y = 2; y < 23; y++) { // Horizontiial
		x = 30;
		setxychar(x, y, &graybar, 1);
		x = 35;
		setxychar(x, y, &graybar, 1);
		x = 40;
		setxychar(x, y, &graybar, 1);
		x = 45;
		setxychar(x, y, &graybar, 1);
		x = 50;
		setxychar(x, y, &graybar, 1);
	}

	// labeling cells
	setxychar(32, 1, 'A'); // Columns
	setxychar(37, 1, 'B');
	setxychar(42, 1, 'C');
	setxychar(47, 1, 'D');

	setxychar(28, 5, '1'); // Rows
	setxychar(28, 10, '2');
	setxychar(28, 15, '3');
	setxychar(28, 20, '4');

	// Draws a pile of cards


	for (x = 53; x < 59; x++) { // Vertical
		y = 16;
		setxychar(x, y, &graybar, 1);
		y = 21;
		setxychar(x, y, &graybar, 1);
	}
	for (y = 16; y < 21; y++) { // horizontal
		x = 53;
		setxychar(x, y, &graybar, 1);
		x = 58;
		setxychar(x, y, &graybar, 1);
	}
	// Labels the pile
	setxychar(53, 11, 'P');
	setxychar(53, 12, 'I');
	setxychar(53, 13, 'L');
	setxychar(53, 14, 'E');

	
	for (x = 21; x < 27; x++) { // Vertical
		y = 2;
		setxychar(x, y, &graybar, 1);
		y = 7;
		setxychar(x, y, &graybar, 1);
	}

	for (y = 2; y < 8; y++) { //horizontial
		x = 21;
		setxychar(x, y, &graybar, 1);
		x = 26;
		setxychar(x, y, &graybar, 1);
	}

	// Labels the pile
	setxychar(22, 8, 'D');
	setxychar(22, 9, 'I');
	setxychar(22, 10, 'S');
	setxychar(22, 11, 'C');
	setxychar(22, 12, 'A');
	setxychar(22, 13, 'R');
	setxychar(22, 14, 'D');
}









Board::~Board()
{
}
