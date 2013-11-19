#ifndef CTEMPSTAFF_H
#define CTEMPSTAFF_H
#pragma once
#include "CSTaff.h"
#include <iostream>
#include <string>
using namespace std;
class CTempStaff:public CSTaff
{
public:
	CTempStaff()
	{
	this->which=1;
	salary=3000;
	SetNo();
    SetName();
	SetSex();
	}
	CTempStaff(int n){salary=3000;}  //用于文件时输入对象的创建
	int GetSalary(){return salary;}
	void show()
	{
	cout<<"-------教职工信息-------"<<endl;
	cout<<"职工号:"<<GetNo()<<endl;
	cout<<"姓名:"<<GetName()<<endl;
	if(GetSex()==1)
	cout<<"性别:男"<<endl;
	if(GetSex()==2)
	cout<<"性别:女"<<endl;
	cout<<"职务：临时人员"<<endl;;
	cout<<"工资:"<<GetSalary()<<endl;
	cout<<"-------教职工信息-------"<<endl;
	}
};
#endif