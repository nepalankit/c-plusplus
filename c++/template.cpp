#include <iostream>
using namespace std;

template <class t>
t sum(t a,t b)
{
    return a+b;
}

int main()
{
    cout<<"sum is "<<sum(3,4)<<endl;
    cout<<"float sum is"<<sum(1.2,3.4)<<endl;
}