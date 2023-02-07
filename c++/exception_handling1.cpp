#include <iostream>
using namespace std;

int main()
{
    int a,b;
    try
    {
        cout<<"Enter the number"<<endl;
        cin>>a>>b;
    

    if(b==0) throw 0;
    else
    cout<<"the result is "<<a/b;
    }

    
    catch(int x)
    {
        cout<<"OOPS ! division not possible"<<endl;
    }
    
}