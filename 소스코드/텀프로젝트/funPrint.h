#ifndef FUNPRINT_H
#define FUNPRINT_H
#include "Card.h"
using namespace std;

class funPrint : virtual public Card {
	string path;
public:
	void printCard();
};

#endif // !CARD_H
