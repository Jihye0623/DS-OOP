#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funAdd.h"
using namespace std;

void funAdd::addCard() {
	cout << "**명함 추가 시작**" << endl;

	string name, number, mail, company, job, memo;
	cout << "이름>>";
	getline(cin, name);
	cout << "전화번호>>";
	getline(cin, number);
	cout << "메일>>";
	getline(cin, mail);
	cout << "회사>>";
	getline(cin, company);
	cout << "직책>>";
	getline(cin, job);
	cout << "비고>>";
	getline(cin, memo);


	if (name == "")
		throw "오류! 이름 입력은 필수입니다.";

	v.push_back(CardOne(name, number, mail, company, job, memo));

	cout << "**명함 추가 완료**" << endl << endl;
}