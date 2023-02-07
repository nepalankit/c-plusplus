#include <iostream>
using namespace std;
class base
{
    public:
    ~base()
    {
        cout<<"Base class destructor called"<<endl;
    }
};

class derived:public base
{
    public:
    ~derived()
    {
        cout<<"Derived class destructor called"<<endl;
    }
};

int main()
{
    derived d;
}