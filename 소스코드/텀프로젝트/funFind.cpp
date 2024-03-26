#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funFind.h"
using namespace std;

void funFind::findCard() {
	w.clear();
	cout << "�˻� ������ �������ּ���" << endl;
	cout << "1. �̸�		2. ȸ���" << endl;
	cout << "�˻� ����>>";

	int m;
	cin >> m;

	if (cin.fail()){
		cin.clear();
		cin.ignore(256, '\n');
		throw "��ȣ�� �Է����ּ���";
	}

	cin.ignore(1);

	if (m != 1 && m != 2)
		throw "�߸��� ������ �ϼ̽��ϴ�.";

	cout << "�˻���>>";
	string f;
	getline(cin, f);

	for (int i = 0; i < v.size(); i++) {
		int index;
		if (m == 1) {
			index = v[i].getName().find(f);
		}
		else {
			index = v[i].getCompany().find(f);
		}
		if (index != -1)
			w.push_back(i);
	}

	if (w.size() == 0) {
		cout << "�˻� ��� ����" << endl << endl;
	}
	else {
		for (int i = 0; i < w.size(); i++) {
			cout << i + 1 << ")" << endl;
			cout << v[w[i]] << endl;
		}
	}
}