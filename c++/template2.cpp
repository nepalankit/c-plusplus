#include <iostream>
using namespace std;
 template <class t1>
 t1 sum(t1 a[],int size)
 {
 t1 s=0;

 for (int i=0;i<size,i++)
 {
    s=s+a[i];
   
 }
 return s;
 }

int main()
{
    int x[5]={10,20,30,40,50};
    float y[5]={1.1,2.3,4.5,3.3,5.4};

    cout<<"int arrray sum="<<sum(x,5)<<endl;
}