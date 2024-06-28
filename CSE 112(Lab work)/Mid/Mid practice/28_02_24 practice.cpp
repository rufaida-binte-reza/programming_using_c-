#include<iostream>
using namespace std;

int main()
{
    int var;
    int*p;

    cin>>var;

    p=&var;

    cout<<*p<<endl;

    return 0;
}
