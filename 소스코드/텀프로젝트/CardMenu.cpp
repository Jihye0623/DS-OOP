#include <iostream>
#include "menu.h"
#include "CardMenu.h"
using namespace std;

void CardMenu::showMenu() {
	cout << "******메뉴를 선택하세요********";
	cout << "1번. 명함 보기" << endl;
	cout << "2번. 명함 검색" << endl;
	cout << "3번. 명함 추가" << endl;
	cout << "4번. 명함 삭제" << endl;
	cout << "5번. 명함 수정" << endl;
	cout << "6번. 종료" << endl;
}

void CardMenu::menuChoice(int m) {
	switch (m) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	}
}
