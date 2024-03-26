#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Card.h"
#include "CardOne.h"
#include "funPrint.h"
using namespace std;


void funPrint::printCard() {
	cout << "저장할 경로를 입력하세요>>";
	getline(cin, path);

	ofstream fout(path);
	if (!fout) {
		throw "파일 열기 불가";
	}

	for (int i = 0; i < v.size(); i++) {
		fout << v[i] << endl;
	}

	cout << "출력 완료" << endl << endl;

	fout.close();
}
