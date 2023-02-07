#include <iostream>
using namespace std;

class point 
{
    public:
    double x,y;
};

class vector
{
    public:
    point start,end;

    void offset(double offsetx,double offsety)
{

    start.x +=offsetx;
    start.y +=offsety;
    end.x +=offsetx;
    end.y +=offsety;
}

void print()
{
    cout<<"("<<start.x<<","<<start.y<<")"<<" "<<"("<<end.x<<","<<end.y<<")"<<endl;
}
};

/*void printvector(vector &v)
{
    cout<<v.start.x<<" "<<v.start.y<<","<<v.end.x<<" "<<v.end.y<<endl;
}

void offsetvector(vector &v,double offsetx,double offsety) 
{
    v.start.x +=offsetx;
    v.start.y +=offsety;
    v.end.x +=offsetx;
    v.end.y +=offsety;
} */




int main()
{
vector vec;
vec.start.x=1.0;
vec.start.y=2.0;
vec.end.x=3.0;
vec.end.y=1.0;
vec.offset(1.0,1.0);
vec.print();

}
