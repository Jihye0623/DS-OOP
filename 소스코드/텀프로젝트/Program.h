#ifndef PROGRAM_H
#define PROGRAM_H
#include "funAdd.h"
#include "funUpdate.h"
#include "funDelete.h"
#include "funPrint.h"
#include "Menu.h"
using namespace std;


class Program : public funAdd, public funUpdate, public funDelete, public Menu, public funPrint {
public:
	void start();
};

#endif // !PROGRAM_H
