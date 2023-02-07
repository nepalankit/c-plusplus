#include <iostream>
#include <string>
using namespace std;
class Account
{
    private:
    string name;
    double balance;
    
    public:
    void set_balance(double bal)
    {
        balance=bal;    
        
    }
    double get_balance()
    {
        return balance;    
    }
                                            
    void set_name(string name);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string Name1)
{
       name=Name1; 
}

string Account::get_name()
{
 return name;   
}

bool Account::deposit(double amount)
{
    balance+=amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance-amount>=0){
    balance-=amount;
    return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{
    Account Ankit_account;
    Ankit_account.set_name("Ankit_account");
    Ankit_account.set_balance(1000);
    if (Ankit_account.deposit(200))
    {
        cout<<"Deposit OK"<<endl;
    }
    else
    cout<<"Deposit Not allowed"<<endl;
    
    if(Ankit_account.withdraw(1300))
    {
        cout<<"withdrawal ok"<<endl;
        
    }
    else
    cout<<"withdrawal not allowed"<<endl;
    
    return 0;
}


