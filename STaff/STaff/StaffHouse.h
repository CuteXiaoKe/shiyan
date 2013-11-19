#ifndef STAFFHOUSE.H
#define STAFFHOUSE_H
#pragma once
#include <string>
#include <fstream>
#include "CSTaff.h"
#include "CTempSTaff.h"
#include "CTeacher.h"
#include "CAdministrator.h"
using namespace std;
class STaffHouse{
public:
	virtual ~STaffHouse();
	STaffHouse(){count=0;}
	void addstaff();
	void changestaff();
	void deletestaff();
	void findone();
	void readin();
	void writeout();
	CSTaff* find(string c);
	CSTaff* head;
	int count;
	CSTaff* current;
};
extern STaffHouse staffhouse;
#endif
