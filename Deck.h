#pragma once
#include "Card.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>


class Deck
{
public:
	void Shuffle();
	Card DealCard();
	void GenDeck();
	void PrintDeck() const;
	bool CheckDeck();
	int GetCurrentCard();
	
	Deck();
	~Deck();
private:
	Card *deck;
	int currentCard;
	const int CARDS_PER_DECK = 52;
};

