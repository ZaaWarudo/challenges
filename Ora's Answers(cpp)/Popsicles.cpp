#include <iostream>
using namespace std;
int func(int *pops,int *num_of_sibs)
{

int z;
z = *pops % *num_of_sibs;
return z;

}
int main()
{
   int pops,num_of_sibs;
   cout<<"Drop the no. of pops and sibs: \n";
   cin>>pops>>num_of_sibs;
   int give_away; int eat_dat;
   give_away = pops- func(&pops,&num_of_sibs);
   eat_dat = func(&pops,&num_of_sibs);
   cout<<"we give away "<<give_away<<" and eat "<<eat_dat;
   return 0;

}

