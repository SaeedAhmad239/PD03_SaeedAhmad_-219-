#include<iostream>
using namespace std;
main()
{
int n;
cout<<"Enter a number";
cin>>n;
int a,b,c,d,x,y;
a=n/1000;
x=n%1000;
b=x/100;
y=x%100;
c=y/10;
d=y%10;
int sum=a+b+c+d;
cout<<"Sum is "<<sum;
}