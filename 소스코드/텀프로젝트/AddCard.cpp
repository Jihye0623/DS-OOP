#include <iostream>
#include <string>
#include "BasicCard.h"
#include "AddCard.h"
using namespace std;

AddCard::AddCard(string name, string number, string address, string mail, string job) {
	this->name = name;
	this->number = number;
	this->address = address;
	this->mail = mail;
	this->job = job;
}