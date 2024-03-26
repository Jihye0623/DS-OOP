#include <iostream>
#include <fstream>
#include "Card.h"
#include "CardOne.h"
#include "funFind.h"
#include "funUpdate.h"
#include "funDelete.h"
#include "funPrint.h"
#include "Menu.h"
#include "Program.h"
using namespace std;

void Program::start() {
	cout << "# ���� ���α׷� ���� #" << endl << endl;
	while (1) {
		try {
			sortCard();
			choice();
			cout << endl;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(256, '\n');
				throw "��ȣ�� �Է����ּ���";
			}

			switch (menuNum) {
			case 1:
				show();
				continue;
			case 2:
				findCard();
				continue;
			case 3:
				addCard();
				continue;
			case 4:
				deleteCard();
				continue;
			case 5:
				updateCard();
				continue;
			case 6:
				printCard();
				continue;
			case 7:
				cout << "���α׷��� �����մϴ�." << endl;
				return;
			default:
				throw "�߸��Է��ϼ̽��ϴ�.";

			}
		}
		catch (const char* s) {
			cout << s << endl << endl;
			continue;
		}
	}
}