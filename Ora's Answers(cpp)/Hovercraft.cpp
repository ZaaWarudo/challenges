#include <iostream>
using namespace std;
int func(int *sales)
{
    int z;
z =*sales*3000000;
return z;
}
int main()
{
    int sales;
    int month;
cout<<"Enter sales no.: ";
cin>>sales;

cout<<func(&sales)-(sales*2000000+1000000);
return 0;
}
