#include <iostream>
using namespace std;
 main() {
string n;
int p,r;
cout<<"Enter the current world population: ";
cin>>p;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>r;
cout<<"The population in three decades will be: " <<p+12*10*3*r;  
}
