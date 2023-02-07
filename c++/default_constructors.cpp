#include <iostream>
using namespace std;
class student
{
    public:
        student()
        {
            cout<<"Base class constructors called"<<endl;
        }
};

class test:public student

{
    public:
        test()
            {    //base called constructor is called itself by the compiler
                cout<<"Derived class constructor called"<<endl;
            }
};


int main()
{
    test t1;
}