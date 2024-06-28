#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    string n;
    cin>>n;

    n.size();
    int s=n.size();

    int a, b;
    cin>>a>>b;

    a--;
    b--;

    swap( n[a], n[b]);

    cout<<n;

}
