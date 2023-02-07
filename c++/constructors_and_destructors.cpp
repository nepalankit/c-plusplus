#include <iostream>
#include <string>
using namespace std;

class player{

    private:
    int health,xp;
    string name;


    public:
     void set_name(string name_val)
     {
        name=name_val;
     }

     player()  //overloaded constructors
     {
        cout<<"no argument constructor has been called"<<endl;

     }

     player(string name)
     {
        cout<<"a string name constructors has been called"<<endl;
     }

     player(string name,int health,int xp)
     {
        cout<<"three argument constructor has been called"<<endl;
     }
     ~player()
     {
        cout<<"destructor has been called for"<<  name<<endl;
     }

};

int main()
{
    {
        player slayer,frank;
        slayer.set_name("slayer");

    }  
       
    {
        
        frank.set_name("frank");
        player hero("hero");
        hero.set_name(hero);
        player villian("villain",100,98);
        villian>set_name("villian");

    }   
        
    
    
    
