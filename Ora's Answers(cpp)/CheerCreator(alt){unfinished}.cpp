#include <iostream>
using namespace std;
string the_if(int *a){
string z;

if(*a>10)
{
    z="*we high five*";
}
else if(*a<=10 && *a>=1)
{
    for(int n=1;n<=*a;n++)
    {
        for(int j=0;j<=4*(*a);j+=4)
        {
            z[j]='R';
            cout<< z;

             for(int k=1;k<=4*(*a);k+=4)
        {
            z[k]='a';
            cout<< z;

            for(int l=2;l<=4*(*a);l+=4)
        {
            z[l]='!';
            cout<< z;

            for(int m=3;m<=4*(*a);m+=4)
        {
            z[m]=' ' ;
            cout<< z;

        }
        }
        }
        }
    }
}
else
{
    cout<<"shh";
}
return z;
}
int main()
{   int a;
    
    cout<<"Enter no. of yards: ";
    cin>>a;
    
    if(a<=10 && a>=1)
    {
    the_if(&a);
    }
    else
    {cout<<the_if(&a);
    }
    return 0;
}
