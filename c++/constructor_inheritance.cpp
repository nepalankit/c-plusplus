/*
rules
1.base class should contain defaullt constructor
2. base class constructor should be invoked inside derived class paramterized constructor
3.base class parametrized constructor should be the first statement in derived class parametrized constructor
4.only one base class constructor is called in derived class constructor
*/
#include<iostream>
#include <string.h>
using namespace std;

class stu
{
    char name[30],course[30];                    //works fine
    public:
    stu(){};

    stu(char name[30],char course[30])

    {
        strcpy(this->name,name);
        strcpy(this->course,course) ;   
        
        
     }
     void showstu()
     {
     cout<<"Name is ::"<<name<<endl;
     cout<<"course is ::"<<course<<endl;
     }

};


class marks:public stu{
    int m,p,c;
    public:
    marks(char name[30],char course[30],int m,int p,int c):stu(name,course)
    {
        marks::stu(name,course);
        this->m=m;
        this->p=p;
        this->c=c;
    }
    void showmarks()
    {
        cout<<"The marks is "<<m<<p<<c<<endl;
    }
};

int main()
{
    marks m("ankit","computer",98,98,98);
    m.showstu();
    m.showmarks();
    

}