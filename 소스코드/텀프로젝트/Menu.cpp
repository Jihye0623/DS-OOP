#include <iostream>
#include "Menu.h"
using namespace std;


void Menu::choice() {
	cout << "****�޴�****" << endl;
	cout << "1. ���� ����" << endl;
	cout << "2. ���� �˻�" << endl;
	cout << "3. ���� �߰�" << endl;
	cout << "4. ���� ����" << endl;
	cout << "5. ���� ����" << endl;
	cout << "6. ���� ���" << endl;
	cout << "7. ����" << endl;
	cout << ">>";

	cin >> menuNum;
	cin.ignore(1);
}