#include <iostream>
#include <fstream>
#include "Program.h"
using namespace std;

int main() {
	Program p;
	p.set("ȫ�浿", "010-1111-1111", "hang111@gmail.com", "��������");
	p.set("�Ѹ�", "010-2222-2222", "lee222@naver.com", "���湰��", "�븮", "���� ����");
	p.set("�����", "010-3333-3333", "kimds@gmail.com", "��������", "���", "��ǻ�� ���� ������");
	p.set("ȫ��ü", "010-4444-4444", "cpp@gmail.com", "��������", "����", "������");
	p.set("�����", "010-5555-5555", "duksung@naver.com", "��������", "", "���� �ް� ��");
	p.start();
}