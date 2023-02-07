#include <iostream>
using namespace std;

class test
{
    double a,b;
    public:
    void get()
    {
        cout<<"enter the two numbers"<<endl;
        cin>>a>>b;
    }
    void exe()
    {
        try{
            if (cin.fail())throw" bad input";
            else if(b==0) throw 0;
            else
            cout<<"the div is"<<a/b<<endl;
        }

        catch(const int a)
        {
            cout<<"oops ! "<<b<<" cannnot be divided"<<endl;
        }
        catch(const char *str)
        {
            cout<<"cannot contain other data type"<<endl;
        }
    }
    
};
int main()
{
    test t1;
    t1.get();
    t1.exe();
}