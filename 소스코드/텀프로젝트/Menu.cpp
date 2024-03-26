#include <iostream>
#include "Menu.h"
using namespace std;


void Menu::choice() {
	cout << "****메뉴****" << endl;
	cout << "1. 명함 보기" << endl;
	cout << "2. 명함 검색" << endl;
	cout << "3. 명함 추가" << endl;
	cout << "4. 명함 삭제" << endl;
	cout << "5. 명함 수정" << endl;
	cout << "6. 명함 출력" << endl;
	cout << "7. 종료" << endl;
	cout << ">>";

	cin >> menuNum;
	cin.ignore(1);
}