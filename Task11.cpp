#include<iostream>
using namespace std;
main()
{
int age;
cout<<"Enter age";
cin>>age;
cout<<"Enter number of times you moved from one house to another.";
int n;
cin>>n;
int avg=age/(++n);
cout<<"Average span time in one house is " <<avg;
}