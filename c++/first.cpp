// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main()
{
int i,num[10];
 cout<<"Enter 10 positive number "<<endl;
for(i=0;i<10;i++)
{
    cin>>num[i+1];
}

for(i=1;i<=10;i++)
{
    if (num[0]<num[i])
    num[0]=num[i];
}
cout<<"largest element is"<<num[0];
    

    

    return 0;
}