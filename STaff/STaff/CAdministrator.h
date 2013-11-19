#ifndef CADMINISTRAROR_H
#define CADMINISTRAROR_H
#pragma once
#include "CSTaff.h"
#include <iostream>
#include <string>
using  namespace std;
class CAministrator:public CSTaff
{
public:
	CAministrator(int n)
	{
	 basic=3000;
	 yearsdan=200;
	 which=2;
	 zhiwu=n;
	 SetNo();
	 SetName();
	 SetSex();
	 SetServiceYears();
	 switch(zhiwu)
	 {
      case 1: zhiwusalary=0;
		    break;
	  case 2: zhiwusalary=2000;
		    break;
	  case 3: zhiwusalary=4000;
		    break;
	 }
	}
	CAministrator(){
	  basic=3000;
	 yearsdan=200;}
	int GetSalary(){salary=(basic+yearsdan*ServiceYears+zhiwusalary);return salary;}
	void show()
	{
	cout<<"-------教职工信息-------"<<endl;
	cout<<"职工号:"<<GetNo()<<endl;
	cout<<"姓名:"<<GetName()<<endl;
	if(GetSex()==1)
	cout<<"性别:男"<<endl;
	if(GetSex()==2)
	cout<<"性别:女"<<endl;
	switch(zhiwu)
	{
	case 1:cout<<"职务:一般行政人员"<<endl;
		 break;
	case 2:cout<<"职务:科级干部"<<endl;
		 break;
	case 3:cout<<"职务:处级干部"<<endl;
		 break;
	} 
	cout<<"工龄:"<<GetServiceYears()<<endl;
	cout<<"工资:"<<GetSalary()<<endl;
	cout<<"-------教职工信息-------"<<endl;
	}
};
#endif
