#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funFind.h"
#include "funDelete.h"
using namespace std;

void funDelete::deleteCard() {
	findCard();

	if (w.size() == 0) {
		return;
	}

	cout << "������ ��ȣ�� �����ϼ���>>";
	int n;
	cin >> n;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		throw "��ȣ�� �Է����ּ���";
	}

	if (n<1 || n>w.size()){
		cin.ignore(256, '\n');
		throw "����! ���� ������ ������ϴ�.";
	}

	v.erase(v.begin() + w[n - 1]);

	cout << "**���� ���� �Ϸ�**" << endl << endl;

}