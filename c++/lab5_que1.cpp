#include<iostream>
#include<math.h>
using namespace std;

class complex
{
    private:
    int x,y;

    public:
    complex(){x=0;y=0;}
    complex(int a,int b){x=a;y=b;}

    //minus unary operator
    void operator-(){x=-x;y=-y;}

    //declaration of friend function for scalar multiplication
    friend complex scalarMultiplication(complex &);
    
    //plus binary operator
    complex operator+(complex b)
    {
        complex result;
        result.x=x+b.x;
        result.y=y+b.y;

        return result;
    }

    //minus binary operator
    complex operator-(complex b)
    {
        complex result;
        result.x=x-b.x;
        result.y=y-b.y;

        return result;
    }

    //shorthand operator
    complex operator+=(complex c1)
    {
        x+=c1.x;y+=c1.y;
    }

    //== Equals to operator
    int operator==(complex c1)
    {
        if(x==c1.x && y==c1.y) return 1;
        else return 0;
    }

    //greater than operator
    int operator>(complex c1)
    {
        if(x>c1.x && y>c1.y) return 1;
        else return 0;
    }

    //Not equals to operator
    int operator!=(complex c1)
    {
        if(x!=c1.x && y!=c1.y) return 1;
        else return 0;
    }

    //pre-increment operator
    complex operator++(){x++;y++;}

    //post increment oprerator
    complex operator++(int){x++;y++;}

    friend ostream & operator<<(ostream &out ,complex &c);
    
};

//definition of scalarmultiplication function
complex scalarMultiplication(complex &b)
{
    int num;
    cout<<"Enter a number you want to multiply with: ";
    cin>>num;

    b.x=num*b.x;
    b.y=num*b.y;

}

//stream insertion operator
ostream & operator<<(ostream &out,complex &c)
{
    out<<"("<<c.x<<","<<c.y<<")";
    return out;

}
int main()
{
    complex c(4,4),c1(5,6) ,c2(3,4),c3(1,6);
    cout<<"C,C1,C2 and C3 are: "<<c<<","<<c1<<","<<c2<<" and "<<c3<<endl; 
    
    -c1;c2++;++c3;
    cout<<"Value of C1 after minus unary operator: "<<c1<<endl; 
    cout<<"Value of C2 after post increment operator: "<<c2<<endl;
    cout<<"Value of C3 after pre increment operator: "<<c3<<endl; 

    if(c1==c2) {cout<<"C1 and C2 are equal"<<endl;}
    else if(c1!=c2) 
    {
        cout<<"C1 and C2 are not equal"<<endl;
        if(c1>c2) {cout<<"C1 is greater than C2"<<endl;}
        else {cout<<"C2 is greater than C1"<<endl;}
    }

    scalarMultiplication(c1);
    c2+=c;
    cout<<"Value of C1 after scalar multiplication: "<<c1<<endl; 
    cout<<"Value of C2 after shorthand operator(C2+=C): "<<c2<<endl; 

    complex c4;
    c4=c1+c2;
    cout<<"Value after adding C1 and C2: "<<c4<<endl; 

    complex c5;
    c5=c4-c3;
    cout<<"Value after subtracting C3 from above value: "<<c5<<endl; 
    

    return 0;
}