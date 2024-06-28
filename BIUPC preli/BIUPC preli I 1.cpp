#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;

 for(int i=0; i<n;i++)
  {
      int a;
      cin>>a;
      for(int j=0; j<a;j++)
      {

          int integers;
          cin>>integers;
         if sqrt(integers)
            {
                count++;
                //cout<<count<<endl;
            }
            cout<<count;

  }
}
}
