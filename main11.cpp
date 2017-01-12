#include <iostream>

using namespace std;

int main()
{
    string a[100],temp;
    int i,j,n;
    cout<<"enter the number of names \n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(a[i]>a[j])
            {

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }

        }

    }
    cout<<"Sorted names in alphabetic Order"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;


}
