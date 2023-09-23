#include <iostream>
using namespace std;
main()
{
cout<<"Enter the student's name: "<<endl;
string name;
cin>>name;
cout<<"Enter matriculation marks (out of 1100):"<<endl;
float matric;
cin>> matric;
cout<<"Enter intermediate marks (out of 550):"<<endl;
float inter;
cin>>inter;
cout<<"Enter ecat marks (out of 400):"<<endl;
float ecat;
cin>>ecat;
float agg;
agg=matric/1100*.1+inter/550*.4+ecat/400*.5;
agg=agg*100;
cout<<"Aggregate score for " <<name; cout<<" in UET is:" <<agg <<endl;
}