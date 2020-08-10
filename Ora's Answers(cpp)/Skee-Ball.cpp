#include <iostream>
using namespace std;
int main()
{
    int x;
    x=500;
    cout<<"your score is "<<x<<endl;
    int y=12;
    cout<<"price of one ticket is "<<y<<endl;

    cout<<"total no. of tickets = "<<(x/y)<<endl;
    int z=40;
    cout<<"price of 1 squirt gun= "<<z<<endl;
    if((x/y)>=40){
    cout<<"you can buy "<<(x/y)/40<<" squirt guns.";
    }
    else
    {
        cout<<"You cant buy.";
    }
    return 0;

}
