#include<iostream>
#include<math.h>
using namespace std;
int main()
{
        int c;
    int a;
    double PH;
    double H;
    double POH;
    double OH;

    cout<<" Type 1 for acid"<<endl<<" Type 2 for base"<<endl;
    cin>>c;

     if (c==1)
     {
         cout<<"please select the acid"<<endl;
        cout<<"1.HF"<<endl<<"2.HI"<<endl<<"3.HBr"<<endl<<"4.HCl"<<endl<<"5.HClO2"<<endl<<"6.HNO3"<<endl<<"7.HC2H3O2"<<endl<<"8.H2SO4"<<endl<<"9.H2CO3"<<endl<<"10.H3PO4"<<endl;
        cin>>a;
         cout<<"acid:"<<a<<endl;
        if(a>=1 and a<=7 )
        {
            cout<<"Please type the Molarity of the acid."<<endl;
            cin>>H;
            PH= -log10(H);
            cout<<"PH:"<<PH<<endl;
            cout<<"POH:"<<14-PH<<endl;

        }
        else if(a>=8 and a<=9)
        {
            cout<<"Please type the Molarity of the acid."<<endl;
            cin>>H;

            PH= -log10(2*H);
            cout<<"PH:"<<PH<<endl;

            cout<<"POH:"<<14-PH<<endl;
            cout<<"a"<<endl;

        }

        else if(a==10)
        {
            cout<<"Please type the Molarity of the acid."<<endl;
            cin>>H;
            PH= -log10(3*H);
            cout<<"PH:"<<PH<<endl;
            cout<<"POH:"<<14-PH<<endl;
            cout<<"b"<<endl;
        }
     }

     if (c==2)
     {
        cout<<"please select the base"<<endl;
        cout<<"1.LiOH"<<endl<<"2.KOH"<<endl<<"3.NaOH"<<endl<<"4.Mg(OH)2"<<endl<<"5.Ca(OH)2"<<endl<<"6.Zn(OH)2"<<endl;
        cin>>a;
        cout<<"base:"<<a<<endl;
        if(a>=1 and a<=3 )
        {
            cout<<"Please type the Molarity of the base."<<endl;
            cin>>OH;
            POH= -log10(OH);
            cout<<"POH:"<<POH<<endl;
            cout<<"PH:"<<14-POH<<endl;

        }

        else if(a>=4 and a<=6)
        {
            cout<<"Please type the Molarity of the base."<<endl;
            cin>>OH;

            POH= -log10(2*OH);
            cout<<"POH:"<<POH<<endl;

            cout<<"PH:"<<14-POH<<endl;
            cout<<"a"<<endl;
        }

     }


}
