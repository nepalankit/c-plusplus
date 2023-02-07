#include <iostream>
using namespace std;
class test
{
    public:
    static int a;

    void get()
    {
        cout<<"a="<<a<<endl;
    }
};

int test::a=10;                           //static le sabai objects ko value eutai garaidinxa

int main()
{
    test::a=100;
    cout<<"The value of main is"<<test::a;
    test t;
    t.get();
}