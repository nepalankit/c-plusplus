#include <iostream>
using namespace std;
class test1;
class test
{
    int x,y;
    public:

    void getin()
    {
        cout<<"enter two values"<<endl;
        cin>>x>>y;
    }

    friend class test1;

};


class test1{
    public:
      
      void display(test t1)
      {
        cout<<" the values are :"<<t1.x<<","<<t1.y<<endl;
      }

};

int main()
{
    test t1;
    test1 t2;
    t1.getin();
    t2.display(t1);


}