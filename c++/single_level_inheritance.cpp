#include <iostream>
using namespace std;

class student
{
    private:
        char name[30];
        int roll;
    public:
        void getstu()
        {
            cout<<"enter the name and roll no"<<endl;
            cin>>name>>roll;

        }

        void showstu()
        {
            cout<<"The name and roll num is "<<name<<roll<<endl;
        }

    
    

};

class student1:private student
{
    public:
    int height,weight;

    void getstu1()
    {
        getstu();
        cout<<"Enter the height and weight"<<endl;
        cin>>height>>weight;
    }

    void showstu1()
    {
        showstu();
        cout<<"the height and weight is "<<height<<weight<<endl;

    }


};

int main()
{
    student1 stu;
    
    
    stu.getstu1();
    stu.showstu1();

}
