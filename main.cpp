#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
    cout<<"sum is:"<<sum;
    return 0;

}
