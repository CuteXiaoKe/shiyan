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
	cout<<"-------��ְ����Ϣ-------"<<endl;
	cout<<"ְ����:"<<GetNo()<<endl;
	cout<<"����:"<<GetName()<<endl;
	if(GetSex()==1)
	cout<<"�Ա�:��"<<endl;
	if(GetSex()==2)
	cout<<"�Ա�:Ů"<<endl;
	switch(zhiwu)
	{
	case 1:cout<<"ְ��:һ��������Ա"<<endl;
		 break;
	case 2:cout<<"ְ��:�Ƽ��ɲ�"<<endl;
		 break;
	case 3:cout<<"ְ��:�����ɲ�"<<endl;
		 break;
	} 
	cout<<"����:"<<GetServiceYears()<<endl;
	cout<<"����:"<<GetSalary()<<endl;
	cout<<"-------��ְ����Ϣ-------"<<endl;
	}
};
#endif
