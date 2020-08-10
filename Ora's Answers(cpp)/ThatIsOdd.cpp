#include <iostream>
using namespace std;
int num_gen(int *x)
{
    int z;
    z=1+(rand()%(*x));
    return z;

}
int main()
{   int y=0;
    int x;
    int j;
    cout<<"no: ";
    cin>>x;
    cout<<"the no.s: "<<endl;

    for(int n=1; n<=x; n++)
    {
         j=num_gen(&x);
        cout<<j<<endl;

if(j % 2 == 0)
{
    y+=j;

}
    }
    cout<<"the sum :";
    cout<<y<<endl;
return 0;
}

