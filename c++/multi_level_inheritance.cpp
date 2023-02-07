#include <iostream>
using namespace std;
class student
{
    private:
    char name[45];
    int id;
    public:
    void get()
    {
        cout<<"Enter the student name and id"<<endl;
        cin>>name>>id;

    }

    void show()
    {

        cout<<"The name and id is "<<name<<" "<<id<<endl;

    }

};

class  marks
{
    protected:
    int m1,m2,m3;
    public:


    void getmarks()
    {
    cout<<"enter the marks"<<endl;
    cin>>m1>>m2>>m3;
    }

    void showmarks()
    {
        cout<<"the marks is "<<" ,"<<m1<<","<<","<<","<<m2<<","<<m3<<endl;
    }
};

class total:public student,public marks
{
    private:
    int total;
    public:
    void showtotal()
    {
    total=m1+m2+m3;
    
    cout<<"the total marks is"<<total<<endl;
    }
};

int main()
{
    total t1;
    t1.get();
    t1.getmarks();
    t1.show();
    t1.showmarks();
    t1.showtotal();
    

}