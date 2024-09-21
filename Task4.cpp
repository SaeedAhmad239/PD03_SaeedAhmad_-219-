#include<iostream>
using namespace std;
main()
{
cout<<"Enter imposter count";
int i;
cin>>i;
cout<<"Enter player count";
int p;
cin>>p;
int chance=(i*100)/p;
cout<<"Chance of being an imposter is "<<chance <<"%";
}