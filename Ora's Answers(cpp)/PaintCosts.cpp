#include <iostream>
#include <cmath>
using namespace std;
double tax(int& y)
{
    double z;
    double j;
    j=40+(y*5);
    z=j+(j*0.1);
    return z;
}
int main()
{   int x;
    cout<<"Enter no. additional colors to buy : ";
    cin>>x;
    cout<<"your total was : "<<round(tax(x));
    return 0;
}
