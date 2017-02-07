#include "stdafx.h"
#include "Card.h"


Card::Card()
{

}

// Creates the card
Card::Card(string cardFace, string cardSuit) {
	face = cardFace;
	suit = cardSuit;
}

Card::~Card()
{
}

// Returns the face and suit of a card
string Card::Print() const {
	
	return (face + suit);
}



