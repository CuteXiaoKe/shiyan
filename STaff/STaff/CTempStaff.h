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
	CTempStaff(int n){salary=3000;}  //�����ļ�ʱ�������Ĵ���
	int GetSalary(){return salary;}
	void show()
	{
	cout<<"-------��ְ����Ϣ-------"<<endl;
	cout<<"ְ����:"<<GetNo()<<endl;
	cout<<"����:"<<GetName()<<endl;
	if(GetSex()==1)
	cout<<"�Ա�:��"<<endl;
	if(GetSex()==2)
	cout<<"�Ա�:Ů"<<endl;
	cout<<"ְ����ʱ��Ա"<<endl;;
	cout<<"����:"<<GetSalary()<<endl;
	cout<<"-------��ְ����Ϣ-------"<<endl;
	}
};
#endif