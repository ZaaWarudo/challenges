#include <iostream>
#include <cmath>
using namespace std;
int conv(int *x,int *y)
{   int z;
    *x;
    *y/=50;
    z=fmin(*x,*y);
    return z;
}
int main()
{
    int x,y;
    int a;
    cout<<"Enter amount in dollars then in pesos: ";
    cin>>x>>y;
    a=conv(&x,&y);
    if(a==x)
    {
        cout<<"dollars";
    }
    else
    {
        cout<<"pesos";
    }
    return 0;
}
