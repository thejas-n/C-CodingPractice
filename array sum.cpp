#include <iostream>

using namespace std;

int main()
{
    int n,a[100],i,j,no;
    cout<<"enter the number of elements :";
    cin>>n;
    cout<<"enter array elements :";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter the sum :";
    cin>>no;
    cout<<"the numbers that make the sum are :";
    for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(a[i]+a[j]==no)
    {
        cout<<a[i]<<" "<<a[j]<<"\n";
    }
    }
   }
   return 0;
}
