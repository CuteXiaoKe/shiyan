#include "STaffHouse.h"
#include <string>
#include <iostream>
using namespace std;
STaffHouse staffhouse;
STaffHouse::~STaffHouse()
{
	if(count==0)
	{
	  delete(head);
	  delete(current);
	}
	else
	{
	while(head->next!=NULL)
	{
		CSTaff* p=head;
		head=head->next;
		delete(p);
	}
	}
}
CSTaff* STaffHouse::find(string c)
{
	CSTaff* p=head;
	while(p!=NULL)
	{
		if(p->GetNo()==c||p->GetName()==c)
	      return p;
		p=p->next;
	}
	if(p==NULL)
		return NULL;
}
void STaffHouse::addstaff()
{
	count++;
	cout<<count<<endl;
	int i;
	cout<<"ѡ����Ҫ�����ְ��������"<<endl;
	cout<<"1:��ʱ��"<<endl;
	cout<<"2:������Ա"<<endl;
	cout<<"3:��ʦ"<<endl;
	cin>>i;
	while(cin.fail()||(i!=1&&i!=2&&i!=3))
	{
	 cout<<"�������˴�������ݻ�ѡ��"<<endl;
	 cin.clear();
	 cin.sync();
     return ;
	}
	switch(i)
	{
	case 1:cout<<"------------"<<endl;
		   if(count==1)
		   {
		   head=new CTempStaff();
		   head->next=NULL;
		   current=head;
		   cout<<"���ӽ�ְ����Ϣ�ɹ�"<<endl;
		   }
		   else
		   {
		   CSTaff* m=new CTempStaff();
		   CSTaff* q=head;
		   while(q!=NULL)
		   {
			   if(q->GetName()==m->GetName()||q->GetNo()==m->GetNo())
			   {
			     cout<<"���û���/�����Ѿ�����"<<endl;
				 delete (m);
				 return ;
			   }
			   q=q->next;
		   }
		   current->next=m;
		   current=current->next;
		   current->next=NULL;
		   cout<<"���ӽ�ְ����Ϣ�ɹ�"<<endl;
		   }
		   break;
	case 2:cout<<"-------------"<<endl;
		   cout<<"1:һ��������Ա"<<endl;
		   cout<<"2:�Ƽ��ɲ�"<<endl;
		   cout<<"3:�����ɲ�"<<endl;
		   int n;
		   cin>>n;
		   while(cin.fail()||(n!=1&&n!=2&&n!=3))
	       {
	        cout<<"�������˴��������"<<endl;
	        cin.clear();
	        cin.sync();
	        return ;
	        }
		   if(count==1)
		   {
		   head=new CAministrator(n);
		   current=head;
		   current->next=NULL;
		   cout<<"���ӽ�ְ����Ϣ�ɹ�"<<endl;
		   }
		   else
		   {
		   CSTaff* s=new CAministrator(n);
		   CSTaff* q=head;
		   while(q!=NULL)
		   {
			   if(q->GetName()==s->GetName()||q->GetNo()==s->GetNo())
			   {
			     cout<<"���û���/�����Ѿ�����"<<endl;
				 delete (s);
				 return ;
			   }
			   q=q->next;
		   }
		   current->next=s;
		   current=current->next;
		   current->next=NULL;
		   cout<<"���ӽ�ְ����Ϣ�ɹ�"<<endl;
		   }
		   break;
	 case 3:cout<<"-------------"<<endl;
		   cout<<"1:��ʦ"<<endl;
		   cout<<"2:������/����"<<endl;
		   cout<<"3:����"<<endl;
		   int l;
		   cin>>l;
		   while(cin.fail()||(l!=1&&l!=2&&l!=3))
		   {
		    cout<<"�������˴��������"<<endl;
	        cin.clear();
	        cin.sync();
	        return ;
		   }
		   if(count==1)
		   {
		   head=new  CTeacher(l);
		   current=head;
		   current->next=NULL;
		   cout<<"���ӽ�ְ����Ϣ�ɹ�"<<endl;
		   }
		   else
		   {
		   CSTaff* e=new CTeacher(l);
		   CSTaff* q=head;
		   while(q!=NULL)
		   {
			   if(q->GetNo()==e->GetNo()||q->GetName()==e->GetName())
			   {
			     cout<<"���û���/�����Ѿ�����"<<endl;
				 delete (e);
				 return ;
			   }
			   q=q->next;
		   }
		   current->next=e;
		   current=current->next;
		   current->next=NULL;
		   cout<<"���ӽ�ְ����Ϣ�ɹ�"<<endl;
		   }                                    
		   break;
	      }
}
void STaffHouse::findone()
{
	cout<<"��������������ְ����"<<endl;
	string i;
	cin>>i;
    CSTaff* p=find(i);
	if(p==NULL)
	{
	 cout<<"û�д�Ա��"<<endl;
	}
	else
	{
		cout<<p;
	}
}
void STaffHouse::deletestaff()
{
	count--;
	cout<<"��������������ְ����"<<endl;
	string i;
	cin>>i;
    CSTaff* p=find(i);
	if(p==NULL)
	{
	 cout<<"û�д�Ա��"<<endl;
	}
	else if(p==head)
	{
		CSTaff*s=head;
		head=head->next;
		delete(s);
	}
	else
	{
	  CSTaff* q=head;
	  while(q->next!=p) q=q->next;
	  q->next=p->next;
	  delete(p);
	  cout<<"ɾ���ɹ�"<<endl;
	}
}
void STaffHouse::changestaff()
{
     cout<<"��������������ְ����"<<endl;
	string i;
	cin>>i;
    CSTaff* p=find(i);
	if(p==NULL)
	{
	 cout<<"û�д�Ա��"<<endl;
	}
	else
	{
	  cout<<"------------"<<endl;
	  cout<<"�����������Ա����Ϣ"<<endl;
	  this->addstaff();
	  cout<<"�޸ĳɹ�"<<endl;
	}
}
void STaffHouse::readin()
{
  fstream myfile;
  myfile.open("C:\\Users\\Administrator\\Desktop\\STaff.txt",ios::in);
  if(!myfile)
  {
    cerr<<"���ļ�ʧ��"<<endl;
	exit(1);
  }
   while(!myfile.eof())
   {
	  if(myfile.peek()==EOF)  goto moon;
	else
	{
	int i;
	myfile>>i;
	count++;
	if(count==1)
	{
	switch(i)
	{
	case 1:{CTempStaff* p=new CTempStaff(0);
		   head=p;
		   current=p;
		   current->next=NULL;
		   current->which=i;
		   myfile>>current->NO>>current->name>>current->sex>>current->salary;
		   break;}
	case 2:{CAministrator* l=new CAministrator();
		   head=l;
		   current=l;
		   current->next=NULL;
		   current->which=i;
		   myfile>>current->zhiwu;
		   if(l->zhiwu==1)
			 myfile>>current->NO>>current->name>>current->sex>>current->ServiceYears>>current->salary;
		   else
			 myfile>>current->zhiwusalary>>current->NO>>current->name>>current->sex>>current->ServiceYears>>current->salary;
		   break;}
	case 3:{CTeacher* m=new CTeacher();
		   head=m;
		   current=m;
		   current->next=NULL;
		   current->which=i;
		   myfile>>current->leibie;
		   if(current->leibie==1)
			   myfile>>current->xueshi>>current->NO>>current->name>>current->sex>>current->salary;
		   else if(m->leibie==2)
			   myfile>>current->xueshi>>current->shuoshi>>current->NO>>current->name>>current->sex>>current->ServiceYears>>current->salary;
		   else 
			   myfile>>current->xueshi>>current->shuoshi>>current->boshi>>current->NO>>current->name>>current->sex>>current->ServiceYears>>current->salary;
		   break;}
	}
   }
	else
	{
	switch(i)
	{
	case 1:{CTempStaff* p=new CTempStaff(0);
		   p->which=i;
		   myfile>>p->NO>>p->name>>p->sex>>p->salary;
		   current->next=p;
		   current=p;
		   current->next=NULL;
		   break;}
	case 2:{CAministrator* l=new CAministrator();
		   l->which=i;
		   myfile>>l->zhiwu;
		   if(l->zhiwu==1)
			 myfile>>l->NO>>l->name>>l->sex>>l->ServiceYears>>l->salary;
		   else
			 myfile>>l->zhiwusalary>>l->NO>>l->name>>l->sex>>l->ServiceYears>>l->salary;
		   current->next=l;
		   current=l;
		   current->next=NULL;
		   break;}
	case 3:{CTeacher* m=new CTeacher();
		   m->which=i;
		   myfile>>m->leibie;
		   if(m->leibie==1)
			   myfile>>m->xueshi>>m->NO>>m->name>>m->sex>>m->ServiceYears>>m->salary;
		   else if(m->leibie==2)
			   myfile>>m->xueshi>>m->shuoshi>>m->NO>>m->name>>m->sex>>m->ServiceYears>>m->salary;
		   else 
			   myfile>>m->xueshi>>m->shuoshi>>m->boshi>>m->NO>>m->name>>m->sex>>m->ServiceYears>>m->salary;
		   current->next=m;
		   current=m;
		   current->next=NULL;
		   break;}
	}
	}
	}
   }
moon:  myfile.close();
}
void STaffHouse::writeout()
{
  fstream myfile;
  myfile.open("C:\\Users\\Administrator\\Desktop\\STaff.txt",ios::out|ios::trunc);
  if(!myfile)
  {
    cerr<<"���ļ�ʧ��"<<endl;
	exit(1);
  }
  CSTaff* s=head;
   while(s->next!=NULL)
  {
   if(s->which==1)
   {
	myfile<<s->which<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<" "<<s->GetSalary()<<endl;
   }
   else if(s->which==2)
   {
	   if(s->zhiwu==1)
	      myfile<<s->which<<" "<<s->zhiwu<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary()<<endl;
	   else
	      myfile<<s->which<<" "<<s->zhiwu<<" "<<s->zhiwusalary<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary()<<endl;
   }
   else
   {
      if(s->leibie==1)
	   myfile<<s->which<<" "<<s->leibie<<" "<<s->xueshi<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary()<<endl;
	  else if(s->leibie==2)
	   myfile<<s->which<<" "<<s->leibie<<" "<<s->xueshi<<" "<<s->shuoshi<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary()<<endl;
	  else 
	   myfile<<s->which<<" "<<s->leibie<<" "<<s->xueshi<<" "<<s->shuoshi<<" "<<s->boshi<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary()<<endl;
   }
   s=s->next;
  }
    if(s->which==1)
   {
	myfile<<s->which<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<" "<<s->GetSalary();
   }
   else if(s->which==2)
   {
	   if(s->zhiwu==1)
	      myfile<<s->which<<" "<<s->zhiwu<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary();
	   else
	      myfile<<s->which<<" "<<s->zhiwu<<" "<<s->zhiwusalary<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary();
   }
   else
   {
      if(s->leibie==1)
	   myfile<<s->which<<" "<<s->leibie<<" "<<s->xueshi<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary();
	  else if(s->leibie==2)
	   myfile<<s->which<<" "<<s->leibie<<" "<<s->xueshi<<" "<<s->shuoshi<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary();
	  else 
	   myfile<<s->which<<" "<<s->leibie<<" "<<s->xueshi<<" "<<s->shuoshi<<" "<<s->boshi<<" "<<s->GetNo()<<" "<<s->GetName()<<" "<<s->GetSex()<<" "<<s->GetServiceYears()<<" "<<s->GetSalary();
   }
  myfile.close();
}
