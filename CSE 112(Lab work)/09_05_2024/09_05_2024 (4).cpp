#include<bits/stdc++.h>
using namespace std;

void division(int a, int b)
{
    try
    {
        if(b==0)
            throw 1;

        cout<<a/b<<endl;
    }

    catch(int a)
    {
        cout<<"Can't be divided by zero"<<endl;
    }

}
int main()
{
     division(4,2);

     division(7,0);

     division(0,7);

}
