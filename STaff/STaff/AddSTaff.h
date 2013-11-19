#ifndef ADDSTAFF_H
#define ADDSTAFF_H
#pragma once
#include "MenuItem.h"
#include "STaffHouse.h"
class AddSTaff:public MenuItem
{
public:
	AddSTaff():MenuItem("增加员工"){};
	bool act(){
	   staffhouse.addstaff();
	   return false;
	}
};
#endif