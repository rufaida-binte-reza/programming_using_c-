#include<iostream>
using namespace std;

template<class X>
X findMaximum(X a[], int n)
{
  X max=a[0];
  for(int i=0; i<n; i++)
  {
      if (a[i]>max)
        max=a[i];
  }

  return max;
}


int main()
{
 int intArray[]={5, 10, 3, 8, 2};
 double doubleArray[]={3.5, 2.718, 1.618, 2.22, 0.99};
 char charArray[]={'A' ,'B', 'Z', 'D', 'C'};

 int maxint= findMaximum(intArray, 5);
 cout<<maxint<<endl;

 double maxdouble= findMaximum(doubleArray, 5);
 cout<<maxdouble<<endl;

 char maxchar= findMaximum(charArray, 5);
 cout<<maxchar<<endl;
}
