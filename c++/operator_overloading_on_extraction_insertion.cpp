#include <iostream>
using namespace std;
class stu
{
  int id;
  char name[50];
  public:
  
  friend void operator >>(istream &in, stu &s) //cin belongs to istream class
  {
      cout<<"enter name and id"<<endl;
      in>>s.name>>s.id;
  }
  
  friend void operator <<(ostream &out, stu &s) //cout belongs to ostream class
  {
      out<<"ID="<<s.id<<endl;
      out<<"name="<<s.name<<endl;
  }
};

int main()
{
    stu s;
    cin>>s;
    cout<<s;
}