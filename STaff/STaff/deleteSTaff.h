#ifndef DELETESTAFF_H
#define DELETEFTAFF_H
#pragma once
#include "MenuItem.h"
#include "STaffHouse.h"
class deleteSTaff:public MenuItem
{
public:
	deleteSTaff():MenuItem("É¾³ýÔ±¹¤"){};
	bool act()
	{
	  staffhouse.deletestaff();
     return false;
	}
};
#endif