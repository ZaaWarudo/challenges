#include <iostream>
using namespace std;
int main()
{
    string a;
    int x;
   cout<<"Enter no. of yards.: ";
   cin>>x;
   if(x>10)
   {
       cout<<"*high fives*";
   }
   else if(x<=10 && x>=1)
   {
       for(int y=1;y<x;y++)
       {
           cout<<"Ra! ";
       }
   }
   else
   {
       {
           cout<<"shh";
       }
   }

   return 0;
}
