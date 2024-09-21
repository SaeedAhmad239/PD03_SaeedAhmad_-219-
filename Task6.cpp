#include<iostream>
using namespace std;
main()
{
cout<<"Enter weight of bag in pounds";
int weight;
cin>>weight;
cout<<"Enter square feet area covered by bag ";
int area;
cin>>area;
cout<<"Enter price of bag $";
int price;
cin>>price;
int Price_Per_Pound=price/weight;
int Price_Per_sqfeet=price/area;
cout<<"Price per pound is " <<Price_Per_Pound <<"$" <<endl;
cout<<"Price per square feet is " <<Price_Per_sqfeet <<"$"<<endl;
}