#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i,n;
  cout<<"Enter any number: ";
  cin>>n;
  if(n==1)
  {
  cout<<"not prime nor composite";
  }
  for(i=2;i<n;i++)
  {
  if(n%i==0)
  {
  cout<<"This number is not a prime number";
  break;
  }
  }
 if(n==i)
 {
 cout<<"This is a prime number";
 }
 return 0;
}
