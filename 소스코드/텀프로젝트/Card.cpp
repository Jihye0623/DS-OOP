#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Card.h"
#include "CardOne.h"
using namespace std;

void Card::set(string name, string number, string mail, string company, string job, string memo) {
	v.push_back(CardOne(name, number, mail, company, job, memo));
}

void Card::show() {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}

void Card::sortCard() {
	int i, j;
	for (i = v.size() - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (v[j].getName() > v[j + 1].getName())
				swap(v[j], v[j + 1]);
		}
	}
}