#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    double n, X, Y, X1, X2, Y1, Y2;
    cin>>X1>>Y1>>X2>>Y2;

    X=X2-X1;
    Y=Y2-Y1;

    n=sqrt((pow(X,2))+(pow(Y,2)));
    cout<<fixed;
    cout<<setprecision(9);
    cout<<n<<endl;

}
