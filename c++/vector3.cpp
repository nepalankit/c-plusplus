
#include <iostream>
using namespace std;

     class point
     {
        public:
        double x,y;
        void offsetvector(double offsetx,double offsety);
        void print();
     };
     
     class vector
     {
         public:
       point start,end;
       void offsetvector(double offsetx,double offsety);
       void print();  
     };
   
   void point::offsetvector(double offsetx,double offsety)
   {
    x +=offsetx;
    y +=offsety;
    x +=offsetx;
    y +=offsety;
   }

   void::print()
   {
     cout<<"("<<x <<","<<y <<")"<<" "<<"("<<x <<","<<y <<")"<<endl;
   }
   
   void::vector(double offsetx,double offsety)
   {
    start.offsetvector(offsetx,offsety);
    end.offsetvector(offsetx,offsety);
   }
  
  void vector::print()
  {
    start.print();
    cout<<",,"
    end.print();
  }
int main() 
{
    vector vec;
   /* vec.start.x=1;
    vec.start.y=1;
    vec.end.x=1;
    vec.end.y=1; */
    vec.offsetvector(1,1);
    vec.print();
    return 0;
}