#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardOne.h"
#include "funFind.h"
using namespace std;

void funFind::findCard() {
	w.clear();
	cout << "검색 기준을 선택해주세요" << endl;
	cout << "1. 이름		2. 회사명" << endl;
	cout << "검색 기준>>";

	int m;
	cin >> m;

	if (cin.fail()){
		cin.clear();
		cin.ignore(256, '\n');
		throw "번호로 입력해주세요";
	}

	cin.ignore(1);

	if (m != 1 && m != 2)
		throw "잘못된 선택을 하셨습니다.";

	cout << "검색명>>";
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
		cout << "검색 결과 없음" << endl << endl;
	}
	else {
		for (int i = 0; i < w.size(); i++) {
			cout << i + 1 << ")" << endl;
			cout << v[w[i]] << endl;
		}
	}
}