#include<iostream>
using namespace std;

class Time
{
    //declaring private data members
    int HH,MM;

    public:

    //defining default,parameterized and copy constructor
    Time(){HH=0;MM=0;}
    Time(int a, int b){HH=a;MM=b;}
    Time(Time &t){HH=t.HH;MM=t.MM;}

    //defining setter function
    void setTime(int h,int m)
    {
        HH=h;MM=m;
    }

    //defining getter function
    int getMin()
    {
        return MM;
    }

    int getHour()
    {
        return HH;
    }

    void getTime()
 
 
 
    {
        cout<<HH<<":"<<MM<<endl;
    }



    //declaring friend function
    friend void operator++(Time &t,int);
    friend Time operator+(Time &t1,Time &t2);

    //defining - operator
    void operator-(Time &t)
    {
        HH-=t.MM;
        MM-=t.MM;
        check();
    }

    //function to checkhours and minutes
    void check()
    {
        if(MM>=60)
        {
            HH+=1;MM-=60;
        }
    }

};

//defining operator ++
void operator++(Time &t,int)
{
    t.HH++;
    t.MM++;
    t.check();
}

//defining operator +
Time operator+(Time &t1,Time &t2)
{
    Time sum;
    int h=t1.HH+t2.HH;
    int m=t1.MM+t2.MM;
    sum.setTime(h,m);
    sum.check();
    return sum;
}

//main function
int main()
{
    Time t1(5,56);
    cout<<"Initial time t1 is: ";
    t1.getTime();
    Time t2(3,46);
    cout<<"Initial time t2 is: ";
    t2.getTime();

    t2++;
    cout<<"Time t2 after using ++ operator: ";
    t2.getTime();

    //adding time t1 and t2
    Time t3;
    t3=t1+t2;
    cout<<"Time after adding both time t1 and t2: ";
    t3.getTime();
    return 0;
}