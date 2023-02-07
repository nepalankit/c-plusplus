#include<iostream>
using namespace std;
template <class t1,class t2>

float sum(t1 x,t2 y)
{
    return x+y;
    
}

int main()
{
    cout<<"for sum sum"<<sum(1,3)<<endl;
    cout<<"for float sum"<<sum(4.5,3)<<endl;
    cout<<"for int float"<<sum(1,3.5)<<endl;
}