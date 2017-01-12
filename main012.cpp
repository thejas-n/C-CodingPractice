#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j;
    cout<<"Enter any number : ";
    cin>>n;
    int q=n;
    int quo=2,count=1;
    while(quo>1)
    {
        quo=n/2;
        count++;
        n=n/2;
    }
    //cout<<count;
    int rem[count];
    while(q!=0)
    {
        rem[i]=q%2;
        i++;
        q=q/2;
    }
    for(j=count-1;j>=0;j--)
    {
        cout<<rem[j];
    }
}
