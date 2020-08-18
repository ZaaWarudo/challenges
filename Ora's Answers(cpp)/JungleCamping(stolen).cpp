#include <iostream>
using namespace std;
void fsound(string y)
{
    if(y=="Grr")
    cout<<"Lion";
    else
    if(y=="Rawr")
    cout<<"Tiger";
    else
    if(y=="Ssss")
    cout<<"Snake";
    else
    if(y=="Chirp")
    cout<<"Bird";
}
void sound(string x)
{
    if(x=="Grr")
    cout<<" Lion";
    else
    if(x=="Rawr")
    cout<<" Tiger";
    else
    if(x=="Ssss")
    cout<<" Snake";
    else
    if(x=="Chirp")
    cout<<" Bird";
}

int main()
{
int i=1;
string a[100];
cin>>a[0];
fsound(a[0]);

for(;i<100;i++)
{
    cin>>a[i];
    sound(a[i]);
}


    return 0;
}
