#include <iostream>
#include <fstream>
#include "Program.h"
using namespace std;

int main() {
	Program p;
	p.set("홍길동", "010-1111-1111", "hang111@gmail.com", "프리랜서");
	p.set("둘리", "010-2222-2222", "lee222@naver.com", "공룡물산", "대리", "서울 거주");
	p.set("김덕성", "010-3333-3333", "kimds@gmail.com", "덕성물산", "사원", "컴퓨터 공학 전공임");
	p.set("홍객체", "010-4444-4444", "cpp@gmail.com", "덕성물산", "부장", "영업부");
	p.set("김덕성", "010-5555-5555", "duksung@naver.com", "프리랜서", "", "현재 휴가 중");
	p.start();
}