#ifndef EXIT_H
#define EXIT_H
#pragma once
#include <iostream>
using namespace std;
#include "MenuItem.h"
#include "STaffHouse.h"
class Exit:public MenuItem{
public:
    Exit():MenuItem("�˳�����"){}
    bool act(){
        cout << "�˳��ɹ�,����ɹ�" << endl;
		staffhouse.writeout();
        return true;
    }
};
#endif 