#ifndef CSTAFF_H
#define CSTAFF_H
#pragma once
#include <string>
#include <iostream>
using namespace std;
class CSTaff
{
public:
	 void SetNo(){cout<<"ְ����:";cin>>this->NO;}
	 string  GetNo(){return this->NO;}
	 void SetName(){cout<<"����:";cin>>this->name;}
	 string  GetName(){return this->name;}
	 void  SetSex()
	 {
     cout<<"�Ա�(1:�� 2:Ů):";
	 cin>>this->sex; 
	 while(sex!=1&&sex!=2)
	  {
	   if(cin.fail()) 
	   {
		   cout<<"�������˴�������ݣ�����������"<<endl;
		   cin.clear();
		   cin.sync();
		   SetSex();
	   }
	   else
	   {
	   cout<<"�������˴�������,����������"<<endl;
	   SetSex();
	   }
	  }
	 }
	 int GetSex(){return this->sex;}
	 void SetServiceYears()
	 {
	  cout<<"����:";
	  cin>>this->ServiceYears;
	  if(cin.fail())
	  {
	    cout<<"�������˴������������"<<endl;
		cin.clear();
		cin.sync();
		SetServiceYears();
	  }
	  else if(ServiceYears<0)  
	  {
	   cout<<"����Ϊ��ֵ"<<endl;
	   SetServiceYears();
	  }
	  else if(ServiceYears>80)
	  {
		 cout<<"��������̫��"<<endl;
		 SetServiceYears();
	  }
	 }
	 int GetServiceYears(){return this->ServiceYears;}
	 virtual int GetSalary()=0;
	 virtual void show()=0;
	 CSTaff* next;
	 int which;
	 friend void operator <<(ostream&out,CSTaff* a)
	 {
		 a->show();
	 }
	int zhiwu;
	int basic;                           //����û������Ա��Ҳû�������÷���&����Ҫ��Ϊ���ļ����� 
	int yearsdan;
	int zhiwusalary;
	int leibie;
	int xueshi;
	int xueshidan;
	int shuoshidan;
	int shuoshi;
	int boshidan;
	int boshi;
	string NO;
	string name;
	int sex;
	int ServiceYears;
	int salary;      
}; 
#endif