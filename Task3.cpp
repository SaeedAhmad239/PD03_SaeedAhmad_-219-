#include<iostream>
using namespace std;
main()
{
int ivelocity;
cout<<"Enter Initial Velocity";
cin>>ivelocity;
int time;
cout<<"Enter time";
cin>>time;
int acc;
cout<<"Enter Acceleration";
cin>>acc;
int fvelocity=acc*time+ivelocity;
cout<<"Final Velocity is " <<fvelocity;
}