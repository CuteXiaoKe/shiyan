#ifndef ADDSTAFF_H
#define ADDSTAFF_H
#pragma once
#include "MenuItem.h"
#include "STaffHouse.h"
class AddSTaff:public MenuItem
{
public:
	AddSTaff():MenuItem("����Ա��"){};
	bool act(){
	   staffhouse.addstaff();
	   return false;
	}
};
#endif