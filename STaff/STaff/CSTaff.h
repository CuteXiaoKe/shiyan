#ifndef CSTAFF_H
#define CSTAFF_H
#pragma once
#include <string>
#include <iostream>
using namespace std;
class CSTaff
{
public:
	 void SetNo(){cout<<"职工号:";cin>>this->NO;}
	 string  GetNo(){return this->NO;}
	 void SetName(){cout<<"姓名:";cin>>this->name;}
	 string  GetName(){return this->name;}
	 void  SetSex()
	 {
     cout<<"性别(1:男 2:女):";
	 cin>>this->sex; 
	 while(sex!=1&&sex!=2)
	  {
	   if(cin.fail()) 
	   {
		   cout<<"您输入了错误的数据，请重新输入"<<endl;
		   cin.clear();
		   cin.sync();
		   SetSex();
	   }
	   else
	   {
	   cout<<"您输入了错误的类别,请重新输入"<<endl;
	   SetSex();
	   }
	  }
	 }
	 int GetSex(){return this->sex;}
	 void SetServiceYears()
	 {
	  cout<<"工龄:";
	  cin>>this->ServiceYears;
	  if(cin.fail())
	  {
	    cout<<"您输入了错误的数据类型"<<endl;
		cin.clear();
		cin.sync();
		SetServiceYears();
	  }
	  else if(ServiceYears<0)  
	  {
	   cout<<"不能为负值"<<endl;
	   SetServiceYears();
	  }
	  else if(ServiceYears>80)
	  {
		 cout<<"工作年龄太大"<<endl;
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
	int basic;                           //这里没保护成员，也没有用引用符号&，主要是为了文件操作 
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