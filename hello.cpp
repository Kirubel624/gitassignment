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
void power()
     {
     long int p;
     int res=1,n;
     cout<<"enter number:";
     cin>>n;
     cout<<"\nenter power:";
     cin>>p;
     for(int i=1;i<=p;i++)
     {
      res=n*res;
     }
      cout<<n<<"\n power "<<p<<" is :"<<res<<endl;
     }

void sq()
     {
     float s;
     int n;
     cout<<"enter number to find its square root:";
     cin>>n;
     s=sqrt(n);
     cout<<"\nsquare root of "<<n<<" is :"<<s<<endl;
     }
int main()
{


    system("cls");
    do
    {

    system("pause");
    system("cls");
    cout<<"***which operation you want to perform***\n";
    cout<<"press 0 for exit\n";
    cout<<"press 1 for addition \n";
    cout<<"press 2 for subtraction\n";
    cout<<"press 3 for multiplication\n";
    cout<<"press 4 for division\n";
    cout<<"press 5 for power calculation\n";
    cout<<"press 6 for square root \n";
    cout<<"press 7 for factorial calculation\n";
    cout<<"press 8 for exponential calculation\n";
    cout<<"press option:";
    cin>>op;
    switch(op)
    {
              case '1':
              sum();

              break;
              case '2':
              diff();
              break;
              case '3':
              pro();
              break;
              case '4':
              div();
              break;
              case '5':
              power();
              break;
              case '6':
              sq();
              break;
              case '7':
              fact();
              break;
              case '8':
              expo();
              break;
              case '0':
              exit(0);
              default:
              cout<<"invalid input"  ;
              system("cls");
    }
    }

    while(op!='0');

                    getch();
                    }
