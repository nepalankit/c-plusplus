#include <iostream>
#include <cstring>
using namespace std;

class test
{
    public:
    int student_id;
    char *name;
    
    test()
    {
       student_id=0;
      // name= '' ;
    }
    
   test( test &source)
    {
       student_id=source.student_id;
       name=strdup(source.name);
    }
    
};

int main()
{
    test student1;
    student1.student_id=98;
    char n[]="foo";
    student1.name=n;
    
    test student2=student1;
    student2.name[0]='b';
    
    cout<<"the name is"<<student1.name;
    
    
    
}