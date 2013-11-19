#include "Menu.h"
#include <iostream>
using namespace std;
Menu::~Menu(){
    for(auto &item:items){
        delete item;
    }
}
void Menu::append(MenuItem* mi){
    this->items.push_back(mi);
}
void Menu::run(){
    int index;
    while(1)
	{
        this->show();
        cin>>index;
        if(cin.fail()||index<1||index>items.size())
		{
            cout<<"����Ĳ˵�����������룺"<<endl;
                cin.clear();
                cin.sync();
				run();
        }
        if(items[index-1]->act()) return;
    }
}
void Menu::show(){
    cout<<"--------------��ְ������ϵͳ-------------"<<endl;
	int i=0;
    for(auto &item:items){
        cout<< ++i <<")" <<item->getCaption() <<endl;
    }
    cout<<"--------------��ְ������ϵͳ-------------"<<endl;
}