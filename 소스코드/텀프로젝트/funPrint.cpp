#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Card.h"
#include "CardOne.h"
#include "funPrint.h"
using namespace std;


void funPrint::printCard() {
	cout << "������ ��θ� �Է��ϼ���>>";
	getline(cin, path);

	ofstream fout(path);
	if (!fout) {
		throw "���� ���� �Ұ�";
	}

	for (int i = 0; i < v.size(); i++) {
		fout << v[i] << endl;
	}

	cout << "��� �Ϸ�" << endl << endl;

	fout.close();
}
