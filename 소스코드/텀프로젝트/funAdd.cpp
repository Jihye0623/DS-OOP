#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funAdd.h"
using namespace std;

void funAdd::addCard() {
	cout << "**���� �߰� ����**" << endl;

	string name, number, mail, company, job, memo;
	cout << "�̸�>>";
	getline(cin, name);
	cout << "��ȭ��ȣ>>";
	getline(cin, number);
	cout << "����>>";
	getline(cin, mail);
	cout << "ȸ��>>";
	getline(cin, company);
	cout << "��å>>";
	getline(cin, job);
	cout << "���>>";
	getline(cin, memo);


	if (name == "")
		throw "����! �̸� �Է��� �ʼ��Դϴ�.";

	v.push_back(CardOne(name, number, mail, company, job, memo));

	cout << "**���� �߰� �Ϸ�**" << endl << endl;
}