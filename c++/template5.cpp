#include <iostream>
using namespace std;

template <class t>

class test

{
    t a,b;
    public:

    void get()
    {
        cin>>a>>b;
    }
    t show();
};

template<class t>
t test <t>::show()
{
    return a+b;
}

int main()
{
    test <int> t1;
    test<float> t2;

    cout<<"enter the int "<<endl;
    t1.get();
    cout<<"sum is"<<t1.show();
    cout<<"enter float"<<endl;
    t2.get();
    cout<<"float is"<<t2.show();
}