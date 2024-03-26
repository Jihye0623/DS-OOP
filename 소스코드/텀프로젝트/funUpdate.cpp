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


	cout << "수정할 명함을 선택하세요" << endl;
	cout << "명함 선택>>";
	int n;
	cin >> n;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		throw "번호로 입력해주세요";
	}

	if (n<0 || n>w.size())
		throw "없는 명함을 골랐습니다.";

	cout << "1) 이름 2) 전화번호 3) 메일 4) 회사명 5) 직책 6) 비고" << endl;
	cout << "번호 입력>>";
	int m;
	cin >> m;


	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		throw "번호로 입력해주세요";
	}

	if (m < 1 || m > 6)
		throw "1~3번까지 숫자 중에 입력해주세요";

	cin.ignore(1);

	cout << "수정할 내용>>";
	string u;
	getline(cin, u);

	if (m == 1 && u == "")
		throw "오류! 이름을 입력해주세요";



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


	cout << "**명함 수정 완료**" << endl << endl;
}