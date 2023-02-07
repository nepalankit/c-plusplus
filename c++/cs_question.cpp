#include <iostream>
using namespace std;

class account
{
    private:
    char name[50];
    int acc_no;

    public:
   // account(){ name=''; acc_no=0;}

    void get_name()
    {
        cout<<"enter your name and accout number"<<endl;
        cin>>name>>acc_no;
        
        
    }
    void display_name_acc_no()
    {
        cout<<"The users name is "<<name<<"  \n Account number is"<<acc_no<<endl;
    }  
};

class savings:virtual public account
{
    protected:
    int balance=0;
    int interest;
    int withdrawal;
    int deposit;
    public:

    void get_deposit()
    {
        cout<<"Enter the amount you want to deposit"<<endl;
        cin>>deposit;
    }
    void update_balance()
    {
        balance=balance+deposit;
        cout<<"Balance after deposit is"<<balance<<endl;
    }
    void get_interest()
    {
        interest=balance+0.13*balance;
        cout<<"Your balance with interest is "<<interest<<endl;
    }
    void get_withdrawal()
    {
        cout<<"Enter the amount you would like to withdraw"<<endl;
        cin>>withdrawal;
       
    }

};


class current:virtual public account, virtual public savings
{
    protected:
    int current_withdrawal;
    public:
    void withdrawal_current()
    {
        if (interest>withdrawal)
        cout<<"your remaining balance is"<<interest-withdrawal<<endl;
        else
        cout<<"Sorry! withdrawal not allowed"<<endl;
    }
    

}; 


int main()
{
    //savings s("ankit",80768389183);
    current a;
    a.get_name();
    a.display_name_acc_no();
    a.get_deposit();
    a.update_balance();
    a.get_interest();
    a.get_withdrawal();
    a.withdrawal_current();
}