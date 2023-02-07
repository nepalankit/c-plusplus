#include <iostream>
using namespace std;

class test
{
 static int count;   
 public:
 
 test()
                                             // using static  objects become part of class as a result same value is attached to three different objects.
{
    count++;
    cout<<count<<"obj created"<<endl;
}
~test()
{
    cout<<count<<"object deleted"<<endl;
    count--;
}

};

int test::count=0 ;


int main()
{
    test t1,t2,t3;
}