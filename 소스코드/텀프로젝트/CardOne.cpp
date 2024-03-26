#include <iostream>
#include <string>
#include "CardOne.h"
using namespace std;


CardOne::CardOne(string name, string number = "", string mail = "", string company = "", string job = "", string memo = "") {
	this->name = name;
	this->number = number;
	this->mail = mail;
	this->company = company;
	this->job = job;
	this->memo = memo;
}

string CardOne::getName() { return name; }
string CardOne::getNumber() { return number; }
string CardOne::getMail() { return mail; }
string CardOne::getCompany() { return company; }
string CardOne::getJob() { return job; }
string CardOne::getMemo() { return memo; }

void CardOne::setName(string name) { this->name = name; }
void CardOne::setNumber(string number) { this->number = number; }
void CardOne::setMail(string mail) { this->mail = mail; }
void CardOne::setCompany(string company) { this->company = company; }
void CardOne::setJob(string job) { this->job = job; }
void CardOne::setMemo(string memo) { this->memo = memo; }


ostream& operator<<(ostream& outs, CardOne c) {
	outs << "----------------" << endl;
	outs << "이름:" << c.name << endl;
	outs << "전화번호:" << c.number << endl;
	outs << "메일:" << c.mail << endl;
	outs << "회사:" << c.company << endl;
	outs << "직책:" << c.job << endl;
	outs << "비고:" << c.memo << endl;
	outs << "----------------" << endl;
	return outs;
}