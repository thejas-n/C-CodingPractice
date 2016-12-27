#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b;         //declaring two variables
    cout<<"      calculator";


        for(;;)       // infinite loop to continue to perform multiple operations.
      {

        cout<<"\nenter the values of a and b:";             //taking input for the variables
        cin>>a>>b;
        char operation;
        cout<<"enter the operation + or - or * or / :";    //input the operation to be performed
        cin>>operation;
        switch (operation)                                 //checks for what the operation does and prints the output
        {
            case '+':
                     cout<< a <<"+"<<b<<"="<<a+b;         //operation + is performed.
            break;

            case '-':
                     cout<< a <<"-"<<b<<"-"<< a-b;       //operation - is performed.
            break;
            case '*':
                     cout<< a <<"*"<<b<<"="<< a*b;      //operation * is performed.
            break;
            case '/':
                if(b>=1)
                     cout<< a <<"/"<<b<<"=" << a/b;    //operation / is performed.
                     else
                        cout<<"math error";
        break;
            default :                                    //prints if the entered case doesn't exist
                cout<<"invalid case" ;
        }
        string input;
        cout<<"\ndo you want to continue";
        cout<<"\nenter yes or no\n";
        cin>>input;
        if(input == "yes")
            return main();
            else if(input == "no")
                return 0;
        }

    return 0;
}
