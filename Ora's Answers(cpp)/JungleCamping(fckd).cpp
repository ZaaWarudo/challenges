#include <iostream>
#include <string>
using namespace std;
void hear(string x)//x=rawr chirp ssss
{
    string z;

    int a;

    string b;

    int n= x.length();

   for(int y=n-4;y>=-1;y-=4)
  {
    y;
    if(y<=0)
   {
       y=0;
   }
   a=x.find(" ",y);
   b=x.substr(a,4);
   if(b =="grrr")//added an additional r for ease
   {
       z="Lion ";
   }
   else if(b== "rawr")
   {
       z="Tiger";
   }
   else if(b == "chirp")
   {
       z="Brid";
   }
   else
   {
       z="Snake";
   }

   cout<<z;
  }
}
int main()
{   string y;
    cout<<"Enter sounds with(spaces) : ";
    cin>>y;
    hear(y);
    return 0;
}
