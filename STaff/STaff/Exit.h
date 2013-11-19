#ifndef EXIT_H
#define EXIT_H
#pragma once
#include <iostream>
using namespace std;
#include "MenuItem.h"
#include "STaffHouse.h"
class Exit:public MenuItem{
public:
    Exit():MenuItem("退出程序"){}
    bool act(){
        cout << "退出成功,保存成功" << endl;
		staffhouse.writeout();
        return true;
    }
};
#endif 