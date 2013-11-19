#ifndef MENU_H
#define MENU_H
#pragma once
#include <vector>
#include "MenuItem.h"
class Menu{
public:
    virtual ~Menu();
    void append(MenuItem* mi);
    void run();
private:
    void show();
    vector<MenuItem*> items;
};
#endif
