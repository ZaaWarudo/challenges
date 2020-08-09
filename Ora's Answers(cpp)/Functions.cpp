#include <iostream>
#include <cmath>
using namespace std;
int max_of_four(int a, int b, int c, int d)

{
    int z;
    if (fmax(a, b) == a && a >= fmax(c, d))
    {
        z=a;
    }

    else if (fmax(a,b)==b && b>= fmax(c,d))
    {
        z=b;
    }
    else if(fmax(c,d)==c && c>= fmax(a,b))
    {
        z=c;
    }
    else
    {
        z=d;
    }
    return z;
}
int main()
{int w,x,y,z;

    cout<<"Enter the no.s: "<<endl;
    cin>>w>>x>>y>>z;
    cout<<max_of_four(w,x,y,z);

}