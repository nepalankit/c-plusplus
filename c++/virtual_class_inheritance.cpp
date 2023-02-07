#include <iostream>
using namespace std;
class c1
{
    public:

    void getc1()
    {
        cout<<"c1 class created"<<endl;
    }

};

class c2:public  virtual c1
{
    public:

    void getc2()
    {
        cout<<"C2 class created "<<endl;
    }
};

class c3:public virtual  c1
{
    public:

    void getc3()
    {
        cout<<"c3 class created"<<endl;
    }

};

class c4: public c2,public c3{
    public:

    void getc4()
    {
        cout<<"c4 class created"<<endl;
    }
};

int main()
{
    c4 obj;
    obj.getc1();
    obj.getc2();
    obj.getc3();
    obj.getc4();
}