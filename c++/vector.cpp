#include <iostream>
using namespace std;
void print_vector(double x0,double y0,double x1,double y1);
void offsetvector(double &x0,double &y0,double &x1,double &y1,double offsetx,double offsety);

int main()
{

double xstart{1.2};
double xEnd{2};
double ystart{0.4};
double yend{1.6};
 print_vector(xstart,ystart,xEnd,yend);
 offsetvector(xstart,ystart,xEnd,yend,1.0,1.5);
}

void print_vector(double x0,double y0,double x1,double y1)
{
	cout<< x0<<","<<y0<<" >>"<< x1<<","<<y1<<endl;

}
void offsetvector(double &x0,double &y0,double &x1,double &y1,double offsetx,double offsety)
{
x0+=offsetx;
x1+=offsetx;
y0+=offsety;
y1+=offsety;
cout<< x0<<","<<y0<<" >>"<< x1<<","<<y1<<endl;
}
