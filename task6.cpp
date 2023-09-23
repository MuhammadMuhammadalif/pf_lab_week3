#include <iostream>
using namespace std;
main()
{
int mb;
cout<< "Enter the size in megabytes (MB):"<<endl;
cin>> mb;
float kb,bytes,bits;
kb=mb*1024;
bytes=kb*1024;
bits=bytes*8;
cout<<"Total bits:"<<bits;
}
