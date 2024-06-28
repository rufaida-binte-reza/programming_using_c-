#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    int students[t];
    for(int i=0;i<t;i++)
    {
        cin >> students[i];

    }

    for(int i=0;i<t;i++)
    {

        if(students[i]==1)
        {
            cout<<"0"<<endl;
        }
        else if(students[i]%2!=0)
        {
            cout<<(students[i]+1)/2<<endl;
        }
        else{
            cout<<students[i]/2<<endl;
        }
    }

}
