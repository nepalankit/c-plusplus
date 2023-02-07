#include <iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
               //-----------------------didn't work for post increment
     test()
    {
        x=0;
    }

   void operator ++() //void operator++(int) for post increment
    {
        ++x;
    }

    void operator --()
    {
        --x;
    }

    void display()
    {
        cout<<"value of x is ="<<x<<endl;
    }
    

};

int main()
{
    test t1;
    ++t1;
    t1.display();
    --t1;
    t1.display();

}