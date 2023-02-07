#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    public:

    void getter()
    {
        cin>>a;
    }

    void operator== (test t2)
    {
       if (a== t2.a)
       cout<<"objects are equal"<<endl;
       else
       cout<<"objects are not equal";
    }
};

int main()
{
    test t1,t2;
    cout<<"Enter the t1 objects"<<endl;
    t1.getter();
    cout<<"Enter the t2 objects"<<endl;
    t2.getter();
    t1==t2;

}