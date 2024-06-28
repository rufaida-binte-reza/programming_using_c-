#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int c;
    string acid, base;

    double m, n, x, PH, POH;
    cout<<"Type 1 for acid"<<endl<<"Type 2 for base"<<endl;
    cin>>c;

     if (c==1)
     {
         cout<<"Please enter the Acid name: ";
        cin>>acid;
        cout<<acid<<" "<<"acid"<<endl;

        cout<<"Please enter the Molarity of the Acid"<<endl;
        cin>>m;

        cout<<"Please enter the number of H+ ion in the Acid:"<<endl;
        cin>>n;

        x=m*n;

        PH= -log10(x);
        cout<<"PH: "<<PH<<endl;
        cout<<"POH: "<<14-PH<<endl;
     }

     else
     {
         cout<<"Please enter the Base name: ";
        cin>>base;
        cout<<base<<" "<<"base"<<endl;

        cout<<"Please enter the Molarity of the Base"<<endl;
        cin>>m;

        cout<<"Please enter the number of OH+ ion in the Base:"<<endl;
        cin>>n;

        x=m*n;

        POH= -log10(x);
        cout<<"POH: "<<POH<<endl;
        cout<<"PH: "<<14-POH<<endl;
     }
}
