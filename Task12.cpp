#include<iostream>
using namespace std;
main()
{
cout<<"Enter number of square meters you can paint";
int total_area;
cin>>total_area;
cout<<"Length of single wall";
int l;
cin>>l;
cout<<"Width of single wall";
int w;
cin>>w;
int one_wall_area=l*w;
int n=total_area/one_wall_area;
cout<<"You can paint " <<n<<" walls";
}




