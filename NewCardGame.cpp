// Main class that controls the logic and flow of the game. 
// NewCardGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Deck.h"
#include "Draw.h"
#include "Board.h"
#include "Rules.h"
#include <string>
using std::string;

int main()
{
	
	Deck deck;  // creates deck object
	Card currentCard;  //creates card object
	Rules myRules; // creates rules object
	deck.GenDeck();  // generates a deck

	//shuffles the deck 1000 times
	for (int i = 0; i < 1000; i++) {
		deck.Shuffle();
	}


	string aCard, cell1, cell2;
	bool keepGoing = true;
	Board myBoard;  //CREATES BOARD OBJECT
	myBoard.DrawBoard();
	myBoard.gotoxy(95, 1);
	cout << "SOLITARE" << endl;
	myBoard.gotoxy(98, 2);
	cout << "by" << endl;
	myBoard.gotoxy(95, 3);
	cout << "Derek Wu" << endl;
	bool checkBoard = false;
	bool win = false;
	bool playGame = true;
	while ( playGame == true) {  // WHILE THE GAME IS BEING PLAYED
		while (checkBoard == false) {  // WHILE THE BOARD IS NOT FULL, ALLOW PLAYER TO FILL IT WITH CARDS
			aCard = deck.DealCard().Print();
			myRules.SendTo(aCard);
			myBoard.gotoxy(55, 19);
			cout << "   ";
			if (deck.GetCurrentCard() == 51) {  // STARTS AT 0 AND INCREMENTS 1 AFTER EACH CARD IS PLAYED
				//WHEN IT REACHES 51, THE PLAYER WINS
				win = true;
				playGame = false;
			}
			checkBoard = myRules.BoardFull();
	
		}
		if (myRules.PairsLeft() == false) {  // IF NO PAIRS LEFT, BREAK OUT OF LOOP

			break;
		}
		while ( keepGoing == true) {  // WHILE PLAYER IS ALLOWED TO CLEAR CARDS AND PAIRS EXIST
			myBoard.gotoxy(81, 9);
			cout << "                                ";
			myBoard.gotoxy(81, 10);
			cout << "Enter Cell for Cell 1(All Caps):      " << endl;
			myBoard.gotoxy(81, 11);
			cout << "    ";  
			myBoard.gotoxy(81, 11);
			cin >> cell1;
			if (cell1 == "A1" || cell1 == "B1" || cell1 == "C1" || cell1 == "D1" ||
				cell1 == "A2" || cell1 == "B2" || cell1 == "C2" || cell1 == "D2" ||
				cell1 == "A3" || cell1 == "B3" || cell1 == "C3" || cell1 == "D3" ||
				cell1 == "A4" || cell1 == "B4" || cell1 == "C4" || cell1 == "D4") {
				//NOTHING HERE SO PROGRAM CAN PROCEED
			}
			else {
				myBoard.gotoxy(81, 9);
				cout << "Invalid entry, please try again:";
				myBoard.gotoxy(81, 10);
				cout << "                  ";
				myBoard.gotoxy(81, 10);
				system("Pause");
				myBoard.gotoxy(81, 11);
				cout << "             ";
				continue;
			}
			myBoard.gotoxy(81, 10);
			cout << "Enter 2nd Cell(All Caps, N if none):   " << endl;  // if cell2 == null, check if 10 card
			myBoard.gotoxy(81, 11);
			cout << "         ";  
			myBoard.gotoxy(81, 11);
			cin >> cell2;
			if (cell2 == "A1" || cell2 == "B1" || cell2 == "C1" || cell2 == "D1" ||
				cell2 == "A2" || cell2 == "B2" || cell2 == "C2" || cell2 == "D2" ||
				cell2 == "A3" || cell2 == "B3" || cell2 == "C3" || cell2 == "D3" ||
				cell2 == "A4" || cell2 == "B4" || cell2 == "C4" || cell2 == "D4" || cell2 == "N") {
				//NOTHING HERE SO PROGRAM CAN PROCEED
			}
			else {
				myBoard.gotoxy(81, 9);
				cout << "Invalid entry, please try again:";
				myBoard.gotoxy(81, 10);
				system("Pause");
				continue;
			}
			if (cell2 == "N") {
				if (myRules.EqualsTen(cell1, cell2) != true) {
					myBoard.gotoxy(81, 9);
					cout << "Invalid entry, please try again:   ";
					myBoard.gotoxy(81, 10);
					system("Pause");
					continue;
				}
			}
			else if ((myRules.NeighborCards(cell1, cell2)) == true) {
				if (myRules.EqualsTen(cell1, cell2) != true) {
					myBoard.gotoxy(81, 9);
					cout << "Invalid entry, please try again:   ";
					myBoard.gotoxy(81, 10);
					system("pause");
					continue;
				}
			}

			if (myRules.PairsLeft() == true) {  //IF THERE ARE PAIRS LEFT...
				keepGoing = true;  // STAY IN THE LOOP
			}
			else {
				keepGoing = false;  // BREAK OUT OF THE LOOP
			}
		}
		checkBoard = myRules.BoardFull();
		if (checkBoard == false) {  // IF BOARD IS NOT FULL, KEEP PLAYING
			keepGoing = true;
		}
		else {
			playGame = false;  // GAME IS OVER
		}
	}
	if (win == false) {  // PLAYER LOSES 
		system("CLS");
		cout << "YOU LOSE!" << endl;
		cout << "Num of cards taken from deck: " << deck.GetCurrentCard() + 1 << endl;
		system("PAUSE");
	}
	else if (win == true) { // PLAYER WINS
		system("CLS");
		cout << "YOU WIN!" << endl;
		system("Pause");
	}
	return 0;
}
