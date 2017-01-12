#include <iostream>

using namespace std;

int main()
{
    int n, num, i,j,pos;
    cout<<"Enter no of elements \n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array \n";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the number to be searched \n";
    cin>>num;
    for(j=0;j<n;j++)
        if(a[j]==num)
        {
            pos=j;
            cout<<"\nelement found at position:"<< pos+1;
        }
        return 0;


}

