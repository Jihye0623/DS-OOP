#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funFind.h"
#include "funUpdate.h"
using namespace std;


void funUpdate::updateCard() {
	findCard();


	if (w.size() == 0) {
		return;
	}


	cout << "������ ������ �����ϼ���" << endl;
	cout << "���� ����>>";
	int n;
	cin >> n;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		throw "��ȣ�� �Է����ּ���";
	}

	if (n<0 || n>w.size())
		throw "���� ������ ������ϴ�.";

	cout << "1) �̸� 2) ��ȭ��ȣ 3) ���� 4) ȸ��� 5) ��å 6) ���" << endl;
	cout << "��ȣ �Է�>>";
	int m;
	cin >> m;


	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		throw "��ȣ�� �Է����ּ���";
	}

	if (m < 1 || m > 6)
		throw "1~3������ ���� �߿� �Է����ּ���";

	cin.ignore(1);

	cout << "������ ����>>";
	string u;
	getline(cin, u);

	if (m == 1 && u == "")
		throw "����! �̸��� �Է����ּ���";



	switch (m)
	{
	case 1:
		v[w[n - 1]].setName(u);
		break;
	case 2:
		v[w[n - 1]].setNumber(u);
		break;
	case 3:
		v[w[n - 1]].setMail(u);
		break;
	case 4:
		v[w[n - 1]].setCompany(u);
		break;
	case 5:
		v[w[n - 1]].setJob(u);
		break;
	case 6:
		v[w[n - 1]].setMemo(u);
	}


	cout << "**���� ���� �Ϸ�**" << endl << endl;
}