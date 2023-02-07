#include <iostream>
using namespace std;
class author
{
    private:
    char author_name[100];
    public:
    friend class book;
};


class book
{
    char book_name[100];
    int price;
    author a1;
    public:
    void get()
    {
        cout<<"Enter the author name"<<endl;
        cin>>a1.author_name;
        cout<<"Enter the book name"<<endl;
        cin>>book_name;
        cout<<"Enter the book price"<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<"The author name of the book is"<<a1.author_name<<endl;
        cout<<"The book name is"<<book_name<<endl;
        cout<<"Book price is"<<price<<endl;
    }
};


int main()
{
    book b1;
    
    b1.get();
    b1.display();

}