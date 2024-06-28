#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int arr[5]= {1,2,3,4,5};
    int*p;

    p= &arr[0];

    for(int i=0; i<5; i++)
    {
        cout<<*p<<endl;
        p++;
    }


    p= &arr[0];

    for(int i=0; i<5; i++)
    {
        sum=sum+*p;
        p++;
    }

    cout<<sum<<endl;
}
