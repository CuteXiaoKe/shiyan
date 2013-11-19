#ifndef CTEACHER_H
#define CTEACGER_H
#pragma once
#include "CSTaff.h"
#include <iostream>
#include <string>
using namespace std;
class CTeacher:public CSTaff
{
public:
	CTeacher(int n)
	{
	  which=3;
	  basic=3000;
	  yearsdan=200;
	  shuoshidan=500;
	  boshidan=800;
	  leibie=n;
	  SetNo();
	  SetName();
	  SetSex();
	  SetServiceYears();
	  switch(leibie)
	  {
	  case 1: xueshidan=200;
		      shuoshi=0; boshi=0;
			  SetXueshi();
			  break;
	  case 2: xueshidan=300;
		      boshi=0;
	          SetXueshi();
			  SetShuoshi();
			  break;
	  case 3:xueshidan=500;
		     SetXueshi();
			 SetShuoshi();
			 SetBoshi();
			 break;
	  }
	}
	CTeacher(){ 
	  basic=3000;
	  yearsdan=200;
	  shuoshidan=500;
	  boshidan=800;}     //用于文件时输入对象的创建
	int GetSalary(){salary=(basic+ServiceYears*yearsdan+shuoshi*shuoshidan+boshi*shuoshidan);return salary;}
	void show()
	{
	cout<<"-------教职工信息-------"<<endl;
	cout<<"职工号:"<<GetNo()<<endl;
	cout<<"姓名:"<<GetName()<<endl;
	if(GetSex()==1)
	cout<<"性别:男"<<endl;
	if(GetSex()==2)
	cout<<"性别:女"<<endl;
    switch(leibie)
	{
	case 1:cout<<"职务:讲师"<<endl;
		   break;
	case 2:cout<<"职务:副教授/教授"<<endl;
		   cout<<"所带硕士生人数："<<shuoshi<<endl;
		   break;
	case 3:cout<<"职务:博士生导师"<<endl;
		    cout<<"所带硕士生人数："<<shuoshi<<endl;
			cout<<"所带博士生人数："<<shuoshi<<endl;
			break;
	}
	cout<<"工龄:"<<GetServiceYears()<<endl;
	cout<<"工资:"<<GetSalary()<<endl;
	cout<<"-------教职工信息-------"<<endl;
	}
	void SetXueshi()
	{
	 cout<<"请输入学时数：";
     cin>>xueshi;
	if(cin.fail()||xueshi<0)
	{
	 cout<<"你输入了错误的数据"<<endl;
	cin.clear();
	cin.sync();
	SetXueshi();
	}
	}
	void SetShuoshi()
	{
	 cout<<"请输入硕士生数：";
     cin>>shuoshi;
	if(cin.fail()||shuoshi<0)
	{
	 cout<<"你输入了错误的数据"<<endl;
	cin.clear();
	cin.sync();
	SetShuoshi();
	}
	}
     void SetBoshi()
	{
	 cout<<"请输入博士生数：";
     cin>>boshi;
	if(cin.fail()||boshi<0)
	{
	 cout<<"你输入了错误的数据"<<endl;
	cin.clear();
	cin.sync();
	SetBoshi();
	}
	}
};
#endif