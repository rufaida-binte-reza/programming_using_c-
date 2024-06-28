// Write a C++ program to check what either the given number is prime or not.



#include<iostream>
using namespace std;
int main()
{
   int num;
   cin>>num;

   if(num%2!=0)
   {
      cout<<"Prime Number"<<endl;
   }

   else if(num==1|| num==0)
   {
      cout<<"Not Prime Number"<<endl;
   }

   else
   {
      cout<<"Not Prime Number"<<endl;
   }

   return 0;
}
