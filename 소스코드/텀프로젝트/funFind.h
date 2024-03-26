#ifndef FUNFIND_H
#define FUNFIND_H
#include "Card.h"
#include <vector>
using namespace std;

class funFind :virtual public Card {
protected:
	vector<int> w;

public:
	void findCard();
};

#endif // !FUNFIND_H