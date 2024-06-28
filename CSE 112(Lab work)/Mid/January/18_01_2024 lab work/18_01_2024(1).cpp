#include<iostream>
using namespace std;

class Book
{
  private:
    string title, author, publication_year;

  public:
    Book()
    {
        title="Before the coffee gets cold";
        author="Toshikazu Kawaguchi";
        publication_year="2017";
    }


    void display()
    {
        cout<<title<<" "<<author<<" "<<publication_year<<endl;
    }

    ~Book()

    {
        cout<<"Object is destroyed"<<endl;
        cout<<title<<" "<<author<<" "<<publication_year;
    }
};

int main()
{
    Book b1;
    b1.display();

    return 0;
}

