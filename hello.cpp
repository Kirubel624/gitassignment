#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
  char op;
using namespace std;
void sum()
   {

    int sum = 0;
    int n;
    int numberitems;
    cout << "Enter number of items: \n";
    cin >> numberitems;

    for(int i=0;i<numberitems;i++)
    {
        cout<< "Enter number "<<i<<":\n\n" ;
        cin>>n;
        sum+=n;
    }
    cout<<"sum is: "<< sum<<endl<<endl;

    }
void diff()
    {
     int diff;
     int n1,n2;
     cout<<"enter two numbers to find their difference:\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     diff=n1-n2;
     cout<<"\ndifference is:"<<diff<<endl<<endl;
     }

