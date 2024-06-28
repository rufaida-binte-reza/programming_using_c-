#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int c;
    string acid, base;

    double m, n, x;
    double PH, POH;
    cout<<"Type 1 for acid"<<endl<<"Type 2 for base"<<endl;
    cin>>c;

     if (c==1)
     {
         cout<<"Please enter acid name: ";
        cin>>acid;
        cout<<acid<<" "<<"acid"<<endl;

        cout<<"Enter the Molarity of the Acid"<<endl;
        cin>>m;

        cout<<"Enter the number of H+ ion in the acid:"<<endl;
        cin>>n;

        x=m*n;

        PH= -log10(x);
        cout<<"PH: "<<PH<<endl;
        cout<<"POH: "<<14-PH<<endl;
     }

     else
     {
         cout<<"Please enter base name: ";
        cin>>base;
        cout<<base<<" "<<"base"<<endl;

        cout<<"Enter the Molarity of the Acid"<<endl;
        cin>>m;

        cout<<"Enter the number of OH+ ion in the acid:"<<endl;
        cin>>n;

        x=m*n;

        POH= -log10(x);
        cout<<"POH: "<<POH<<endl;
        cout<<"PH: "<<14-POH<<endl;
     }
}
