#ifndef CHANGESTAFF_H
#define CHANGESTAFF_H
#pragma once
#include "MenuItem.h"
#include "STaffHouse.h"
class ChangeSTaff:public MenuItem
{
public:
	ChangeSTaff():MenuItem("修改教职工信息"){};
	bool act()
	{
	  staffhouse.changestaff();
	  return false;
	}
};
#endif