#include<iostream>
using namespace std;
 class account
 {
    private:
        char name[30];
        int accno;

    public:
        void getacc()
        {
            cout<<"ENter the account name"<<endl;
            cin>>name;
            cout<<"Enter the acc no"<<endl;
            cin>>accno;
        }

        void showacc()
        {
            cout<<"The account name and number is"<<name<<","<<accno;
        }

 };


 class saving: public account
 {
    protected:
        float bal;
        public:

    void getbal()
    
    {
        cout<<"Enter the balance"<<endl;
        cin>>bal;
    }

    void showbal()
    {
        cout<<"The balance is "<<bal;
    }

    if (bal<500)
    {
        cout<<"Error minimum balance is 500"<<endl;

    }
    else
    cout<<"Account created"<<endl;
    
 };



 class current: public account
 {
    protected:
        float balance;
        public:

    void getbal()
    {
        cout<<"Enter the balance"<<endl;
        cin>>balance;
    }

    void showbal()
    
    {
        cout<<"The balance is "<<balance;
    }

        if (balance<1000)
    {
        cout<<"Error minimum balance is 1000"<<endl;

    }
    else
    cout<<"Account created"<<endl;
    
 };


 int main()
 {
    int id;
        cout<<"Enter 1 for saving account "<<endl;
        cout<<"Enter 2 for saving account "<<endl;
        cout<<"Enter your option"<<endl;
        cin>>id;
        account sav;

        if (id==1)
        {

            sav.getbal();
            sav.showbal();
        }
        else if(id==2)
        {
            current cur;
            cur.getbal();
            cur.showbal();
        }
        else
        cout<<"!!!!please enter valid options"<<endl;
        
 }