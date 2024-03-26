#ifndef CARDONE_H
#define CARDONE_H
#include <string>
using namespace std;
class Card;

class CardOne {
	string name;
	string number;
	string mail;
	string company;
	string job;
	string memo;
public:
	CardOne(string name, string number, string mail, string company, string job, string memo);

	string getName();
	string getNumber();
	string getMail();
	string getCompany();
	string getJob();
	string getMemo();

	void setName(string name);
	void setNumber(string number);
	void setMail(string mail);
	void setCompany(string company);
	void setJob(string job);
	void setMemo(string memo);

	friend ostream& operator<<(ostream& outs, CardOne c);

};

#endif // !CARDONE_H