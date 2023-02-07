#include <iostream>
using namespace std;
//combination of both hierarchical and multiple inheritance
class student
{
    private:
    float id_num;
    char name[30];
    public:
    void getstudent()
    {
        cout<<"Enter the student name and id"<<endl;
        cin>>name;
        cin>>id_num;

    }
};

class marks:public student
{
    protected:
    float m,p,c;
    public:

    void getmarks()
    {
        cout<<"Enter the marks"<<endl;
        cin>>m>>p>>c;

    }
};

class sports
{
    protected:
    int spmarks;
    public:
    void get_spmarks()
    {
        cout<<"enter the sp_marks"<<endl;
        cin>>spmarks;
    }
};

class result :public marks,public sports
{
    protected:
    float avg,tot;
    public:
    
    void show()
    {
    tot=m+p+c;
    avg=tot/3.0;
    cout<<"Total marks is"<<tot<<endl;
    cout<<"Total avg is"<<avg<<endl;
    cout<<"final result is"<<avg+spmarks<<endl;

    }
};


int main()
{
    result r;
    r.getstudent();
    r.getmarks();
    r.get_spmarks();
    r.show();

}