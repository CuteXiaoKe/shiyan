#ifndef FINDONE_H
#define FINDONE_H
#pragma once
#include "MenuItem.h"
#include "STaffHouse.h"
class findOne:public MenuItem
{
public:
	findOne():MenuItem("����Ա����Ϣ"){};
	bool act()
	{
	   staffhouse.findone();
	   return false;
	}
};
#endif