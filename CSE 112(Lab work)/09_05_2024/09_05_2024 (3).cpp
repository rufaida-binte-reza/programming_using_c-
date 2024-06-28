#include<bits/stdc++.h>
using namespace std;

void marks_entry(int a)
{
    try
    {
        if(a<0)
            throw 1;

        if(a>40)
            throw 'x';

        cout<<a<<endl;
    }

    catch(int a)
    {
        cout<<"Marks can't be a negative number"<<endl;
    }

    catch(char x)
    {
        cout<<"Marks of the final exam cannot be greater than 40."<<endl;
    }
}
int main()
{
 for(int i=0;i<36;i++)
 {
     int a;
     cin>>a;

     marks_entry(a);
 }
}
