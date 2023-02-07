#include <iostream>
using namespace std;

int main()
{
    char x='a';
    try
    {
        cout<<"Before thrown value"<<endl;
        throw x;
    }

    catch(...)
    {
        cout<<"catched the thrown value"<<x;
    }
}