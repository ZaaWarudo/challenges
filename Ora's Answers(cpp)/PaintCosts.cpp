#include <iostream>
using namespace std;
int tax(int *x)
{
    int z;
    z=40+(*x)*5+((40+(*x)*5)*(1/5));
    return z;
}
int main()
{   int x;

    cout<<"Enter no. additional colors to buy : ";
    cin>>x;
    cout<<"yor total was : "<<tax(&x);
    return 0;
}