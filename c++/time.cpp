#include <iostream>
using namespace std;
class test
{
    int hh,mm;
    public:
    test(){hh=0;mm=0;}
    test(int a,int b)
    {
        hh=a;
        mm=b;
    }
    test(const test &source)
    {
        hh=source.hh;
        mm=source.mm;
    }
    
    void settest(int h,int m)
    {
        hh=h;
        mm=m;
    }
    
    int gethh()
    {
        return hh;
        
    }
    
    int getmm()
    {
        return mm;
    }

    void gettest()
    {
        cout<<hh<<":"<<mm<<endl;
    }
    
    friend test operator ++(test &t2,int);
    friend test operator +(test &t3,test &t4);
    
    test operator -(test &t)
    {
        test temp1;
        temp1.hh=hh-t.hh;
        temp1.mm=mm-t.mm;
        temp1.check();
        return temp1;
    }
    
    void check()
    {
        if(mm>=60)
        {
            hh=hh+mm/60;
            mm=mm-mm%60;
        }
    }
    
};

test operator ++(test &t2,int)
{
    test temp2;
    temp2.hh=t2.hh++;
    temp2.mm=t2.mm++;
    temp2.check();
    return temp2;
    
}

test operator +(test&t3,test &t4)
{
    test temp3;
    temp3.hh=t3.hh+t4.hh;
    temp3.mm=t3.mm+t4.mm;
    temp3.settest(temp3.hh,temp3.mm);
    temp3.check();
    return temp3;
}


int main()
{
    test t1(5,56);
    cout<<"initial test is \n";
    t1.gettest();
    test t2(3,46);
    cout<<"initial test t2";
    t2.gettest();
    t2++;
    
}