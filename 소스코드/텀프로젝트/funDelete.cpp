#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funFind.h"
#include "funDelete.h"
using namespace std;

void funDelete::deleteCard() {
	findCard();

	if (w.size() == 0) {
		return;
	}

	cout << "삭제할 번호를 선택하세요>>";
	int n;
	cin >> n;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		throw "번호로 입력해주세요";
	}

	if (n<1 || n>w.size()){
		cin.ignore(256, '\n');
		throw "오류! 없는 명함을 골랐습니다.";
	}

	v.erase(v.begin() + w[n - 1]);

	cout << "**명함 삭제 완료**" << endl << endl;

}