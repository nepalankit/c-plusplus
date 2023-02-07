#include<iostream>
using namespace std;
class point
{
    private:
    int x,y;
    public:

    point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }

    point (const point& source)
    {
        x=source.x;
        y=source.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

int main()
{
    point p1(10,15);
    point p2=p1;
    cout<<"value of p1.x is="<<p1.getx()<<endl;
    cout<<"value of p1.y is="<<p1.gety()<<endl;
    cout<<"value of p2.x is="<<p2.getx()<<endl;
    cout<<"value of p2.y is="<<p2.gety()<<endl;


}