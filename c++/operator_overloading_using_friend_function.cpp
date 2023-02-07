#include <iostream>
using namespace std;
class test2;
class test1
{
  private:
  int x;
  public:
  
  void getx()
  {
      cout<<"Enter the first number"<<endl;
      cin>>x;
  }
  friend void operator >(test1, test2);
 
};


class test2
{
  int y;
  public:
  void gety()
  {
      cout<<"Enter the second number"<<endl;
      cin>>y;
  }
  friend void operator >(test1, test2);
};

 void operator >(test1 t1,test2 t2)
 
 {
     if (t1.x>t2.y)
     cout<<"the greater number is : "<<t1.x<<endl;
    // t1.x>t2.y ? cout<<"the greater number is :"<<t1.x:
     else 
     cout<<"the greater number is : "<<t2.y<<endl;
     
 }
 
 int main()
 {
     test1 t1;
     test2 t2;
     t1.getx();
     
     t2.gety();
     t1>t2;
 }
 
 
 
 