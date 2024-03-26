#ifndef CARD_H
#define CARD_H
#include "CardOne.h"
#include <vector>
#include <string>
using namespace std;

class Card {
protected:
	vector<CardOne> v;
public:
	void set(string name, string number = "", string mail = "", string company = "", string job = "", string memo = "");
	void show();
	void sortCard();
};

#endif // !CARD_H
