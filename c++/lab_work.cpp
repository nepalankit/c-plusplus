#include <iostream>
using namespace std;
class Time
{
    int hh,mm;

public:
    Time()
    {
    hh=0;
    mm=0;
    }

    Time(int a,int b)
    {
        hh=a;
        mm=b;
    }

    Time(Time &source)
    {
        hh=source.hh;
        mm=source.mm;

    }

    void set_data(int HH,int MM)
    {
        hh=HH;
        mm=MM;
    }

    void get_data()
    {
        cout<<"HH:MM "<<hh<<" : "<<mm<<endl;
    }

    Time operator -(Time &t1)

    {
        Time temp;
        temp.hh=hh-t1.hh;
        temp.mm=mm-t1.mm;
        if(temp.mm>=60)
        {
            temp.hh++;
            temp.mm-=60;
        }
        return temp;
    }

   


    friend Time operator+(Time &t1,Time &t2);
    friend void operator++(Time &t,int);
};

    void operator++(Time &t,int)
    {
        t.hh+=1;
        t.mm+=10;
        if(t.mm>=60)
        {
            t.hh++;
            t.mm-=60;      
        }
    }

    Time operator+(Time &t1,Time &t2)
    {
        Time temp;
        temp.hh=t1.hh+t2.hh;
        temp.mm=t1.mm+t2.mm;
        if(temp.mm>=60)
        {
            temp.hh++;
            temp.mm-=60;
        }
        return temp;
    }

    int main()
    {

        Time t1(1,67);
        Time t2(2,2);
        Time t3,t4;
        t3=t1+t2;
        t4=t2-t1;
        t1.get_data();
        t2.get_data();
        t3.get_data();
        t4.get_data();
        return 0;

    }