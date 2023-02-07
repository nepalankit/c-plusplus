#include <iostream>
using namespace std;
template <class t>

t sum(t a,t b)
{
    return a+b;
}
template <class t>


t sum(t a,t b,t c)
{
    return a+b+c;
}


int main()
{
    cout<<"The sum  is"<<sum(10,20)<<endl;
    cout<<"Float sum is"<<sum(1.2,2.3)<<endl;
    cout<<"sum three"<<sum(2,3,4)<<endl;
}