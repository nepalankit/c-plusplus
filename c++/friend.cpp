#include <iostream>
using namespace std;
class complex
{
    int x,y;

    public:
    void setnumber(int a,int b)
    {
        x=a;
        y=b;

    }
    void print()
    {
        cout <<"your number is "<<x<<"+" <<" "<<y<<"i"<<endl;

    }
    friend complex sumcomplex(complex o1,complex o2);

};
 
 complex sumcomplex(complex o1,complec o2)
 {
    complex o3;
    o3.setnumber((o1.x+o2.y));
 }

int main()
{
 complex c1,c2,sum;
 c1.setnumber(1,8);
 c2.setnumber(2,5);
 c1.print();
 c2.print();
 sum=sumcomplex(c1,c2);
 sum.printnumber();
return 0;

}