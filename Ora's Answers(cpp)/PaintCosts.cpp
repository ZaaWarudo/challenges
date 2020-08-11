#include <iostream>
#include <cmath>
using namespace std;
double tax(int *x)
{
    double z;
    double j;

    j=40+(*x)*5;
    j+=j*0.1;
    z=j;
    return z;
}
int main()
{   int x;

    cout<<"Enter no. additional colors to buy : ";
    cin>>x;
    cout<<"your total was : "<<round(tax(&x));
    return 0;
}
