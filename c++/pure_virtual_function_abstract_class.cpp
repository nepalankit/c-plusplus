//we cannnot create object from abstract  base  class

#include <iostream>
using namespace std;

class shape //abstract base class
{
    protected:
        float d1,d2;
        public:
        void getdim()
    {
        cout<<"Enter the length "<<endl;
        cin>>d1>>d2;
    }

    virtual float area()=0; //pure virtual form
};

class triangle:public shape
{
    public:
     float area()
    {
        return 0.5*d1*d2;
    }
};

class rectangle:public shape{  //they are defined in base class and redefined in abstract class
    public:
     float area()
    {
        return d1*d2;
    }
};


int main()
{
    triangle t1;
    rectangle t2;
    t1.getdim();
    cout<<"The area of triangle is"<<t1.area();
    t2.getdim();
    cout<<"The area of rectangle is"<<t2.area();
}