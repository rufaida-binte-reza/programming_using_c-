#include<bits/stdc++.h>
using namespace std;


class Phone
{
public:
    virtual void callRecieve()=0;
};


class Landline: public Phone
{
    void callRecieve()
    {
        cout<<"Pick Receiver"<<endl;
    }
};


class Mobile: public Phone
{
    void callRecieve()
    {
        cout<<"Press Receive Button"<<endl;
    }
};


int main()
{
    Phone*ptr;

    Landline L;
    Mobile M;

    ptr=&L;
    ptr->callRecieve();

    ptr=&M;
    ptr->callRecieve();

}


