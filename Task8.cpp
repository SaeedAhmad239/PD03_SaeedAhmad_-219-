#include<iostream>
using namespace std;
main()
{
cout<<"Cost of vegetables per kilogram";
float vegetable;
cin>>vegetable;
cout<<"Cost of Fruit per kilogram";
float fruit;
cin>>fruit;
cout<<"Toatl sold vegetables in kg";
float sold_vegetables;
cin>>sold_vegetables;
cout<<"Toatl sold fruits in kg";
float sold_fruit;
cin>>sold_fruit;
int coins=(sold_vegetables*vegetable)+(sold_fruit*fruit);
int rupees=0.515463917*coins;
cout<<"Total sellery is "<<rupees;
}