#include<iostream>
using namespace std;
 int main()
 {
  int n,a[200],i,j;
  cout<<"Enter Size of array: ";
  cin>>n;
  cout<<"Enter the array elements: ";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout<<"repeated element is";
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
    cout<<"\n"<<a[i];
    }
   }
   }
  return 0;
 }
