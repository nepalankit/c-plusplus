#include <iostream>
using namespace std;
 class point
 {
    private:
    int x;
    public:
   void value(int id)
   {
    x=id;
   }

   void display()
   {
    cout<<"display="<< x<<endl;
   }
    
 };


 int main()
 {
    point p1;
    p1.value(10);
    p1.display();
    point p2=p1;
    p2.display();
 }