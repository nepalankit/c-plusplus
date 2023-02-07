#include <iostream>
using namespace std;
const int m=50;
class item
{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:

    void CNT(void){count=0;}
    void get_item(void);
    void displaysum(void);
    void remove(void);
    void displayitem(void);
};

void item::get_item(void)
{
    cout<<"enter the item code"<<endl;
    cin>>itemcode[count];
    cout<<"enter item cost"<<endl;
    cin>>itemprice[count];
    count++;
}

void item::displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum=sum+itemprice[i];
        cout<<"total value is ::"<<sum<<endl;
    }
}


void item::remove(void)
{
    int a;
    cout<<"enter item  code"<<endl;
    cin>>a;
    for(int i=0;i<count;i++)

    {
        if(itemcode[i]=a)
        itemprice[i]=0;
    }
}

void item::displayitem(void)
{
    cout<<"code price"<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<"\n"<<itemprice[i];
    }
}



int main()
{
    item  order;
    order.CNT();
    int x;

    do{
        cout<<"\n you can do the following"<<endl;
        cout<<"enter appropriate number";

        cout<<"\n 1:Add an item";
        cout<<"\n 2.Display total value";
        cout<<"\n 3.Delete an item";
        cout<<"\n 4.Display all item";
        cout<<"\n 5. quit";
        cout<<"\n what is your option ?";

        cin>>x;

        switch(x)
        {
            case 1: order.get_item(); break;
            case 2: order.displaysum();break;
            case 3: order.remove(); break;
            case 4: order.displayitem(); break;
            case 5: break;
            default: cout<<"Error in input !! try again"<<endl;
        }
    } while (x!=5);
}