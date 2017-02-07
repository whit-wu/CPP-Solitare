// Class the regulates the funtionality of a card deck object.
#include "stdafx.h"
#include "Deck.h"


Deck::Deck()
{
}


Deck::~Deck()
{
}

// Prints the full deck
void Deck::PrintDeck() const {
	cout << std::left;
	for (int i = 0; i < CARDS_PER_DECK; i++) {
		cout << std::setw(19) << deck[i].Print();
		if ((i + 1) % 4 == 0) {
			cout << endl;
		}
	}
}

// Generates a deck array from a card face and card suit array.
void Deck::GenDeck() {
	string faces[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	string suits[] = { "H", "D", "C", "S" };
	deck = new Card[CARDS_PER_DECK];
	currentCard = 0;
	for (int count = 0; count < CARDS_PER_DECK; count++) {
		deck[count] = Card(faces[count % 13], suits[count / 13]);
	}
}

// Shuffles the deck
void Deck::Shuffle() {
	currentCard = 0;
	for (int first = 0; first < CARDS_PER_DECK; first++) {
		int second = (rand() + time(0)) % CARDS_PER_DECK;
		Card temp = deck[first];
		deck[first] = deck[second];
		deck[second] = temp;
	}
}

// Deals a card.
Card Deck::DealCard() {
	if (currentCard > CARDS_PER_DECK) {
		Shuffle();
	}
	if (currentCard < CARDS_PER_DECK) {
		return (deck[currentCard++]);
	}
	return (deck[0]);
}


// Checks to see if deck is cleared
bool Deck::CheckDeck() {
	if (currentCard > 52) {
		return true;
	}
	else {
		return false;
	}
}

int Deck::GetCurrentCard() {
	return currentCard;
}
