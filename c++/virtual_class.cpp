#include <iostream>
using namespace std;

class student
{
    protected:
    int roll_no;

    public:

    void getNum(int a)
    {
        roll_no=a;
    }


    void putNum()
    {
        cout<<"Roll number: "<<roll_no<<endl;
    }
   
};

//class exam virtually inherits class student
class exam:virtual public student
{
   
    protected:
    float part1,part2;

    public:

    
    void getMarks(float x,float y)
    {
        part1=x;
        part2=y;
    }

   
    void putMarks()
    {
        cout<<"Marks obtained: "<<endl;
        cout<<"Part 1= "<<part1<<endl;
        cout<<"Part 2= "<<part2<<endl;
    }
};

//class sports vitually inherits class student
class sports:public virtual student
{

    protected:
    float score;

    public:

      void getScore(float s)
    {
        score=s;
    }

    void putScore()
    {
        cout<<"Sport score: "<<score<<endl;
    }    
};

//class result publically inherits classes exam and sport
class result:public exam,public sports
{
    float total;

    public:
    void display();
};
void result::display()
{
    int total;
    total=part1+part2+score;
    cout<<"Total score: "<<total<<endl;
}

//main function
int main()
{
    result std1;
    std1.getNum(50);
    std1.putNum();
    std1.getMarks(30.0,35.5);
    std1.putMarks();
    std1.getScore(9.5);
    std1.putScore();
    std1.display();
    return 0;
}
