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
	  boshidan=800;}     //�����ļ�ʱ�������Ĵ���
	int GetSalary(){salary=(basic+ServiceYears*yearsdan+shuoshi*shuoshidan+boshi*shuoshidan);return salary;}
	void show()
	{
	cout<<"-------��ְ����Ϣ-------"<<endl;
	cout<<"ְ����:"<<GetNo()<<endl;
	cout<<"����:"<<GetName()<<endl;
	if(GetSex()==1)
	cout<<"�Ա�:��"<<endl;
	if(GetSex()==2)
	cout<<"�Ա�:Ů"<<endl;
    switch(leibie)
	{
	case 1:cout<<"ְ��:��ʦ"<<endl;
		   break;
	case 2:cout<<"ְ��:������/����"<<endl;
		   cout<<"����˶ʿ��������"<<shuoshi<<endl;
		   break;
	case 3:cout<<"ְ��:��ʿ����ʦ"<<endl;
		    cout<<"����˶ʿ��������"<<shuoshi<<endl;
			cout<<"������ʿ��������"<<shuoshi<<endl;
			break;
	}
	cout<<"����:"<<GetServiceYears()<<endl;
	cout<<"����:"<<GetSalary()<<endl;
	cout<<"-------��ְ����Ϣ-------"<<endl;
	}
	void SetXueshi()
	{
	 cout<<"������ѧʱ����";
     cin>>xueshi;
	if(cin.fail()||xueshi<0)
	{
	 cout<<"�������˴��������"<<endl;
	cin.clear();
	cin.sync();
	SetXueshi();
	}
	}
	void SetShuoshi()
	{
	 cout<<"������˶ʿ������";
     cin>>shuoshi;
	if(cin.fail()||shuoshi<0)
	{
	 cout<<"�������˴��������"<<endl;
	cin.clear();
	cin.sync();
	SetShuoshi();
	}
	}
     void SetBoshi()
	{
	 cout<<"�����벩ʿ������";
     cin>>boshi;
	if(cin.fail()||boshi<0)
	{
	 cout<<"�������˴��������"<<endl;
	cin.clear();
	cin.sync();
	SetBoshi();
	}
	}
};
#endif