#include <iostream>
using namespace std;
class test
{
   static int x,y;
    publilc:
    static void get_data()
    {
        cout<<"enter the numbers"<<endl;
        cin>> x>>y;
        cout<<"the numbers are "<<x<<y;
    }

};
int test::x;
int test::y;
int main()
{
    test t1;
    t1.get_data();
}