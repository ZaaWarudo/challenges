#include <iostream>
#include <string>
using namespace std;
int main()
{   string x;
    int y;
    cout<<"Speak yo mind bro.: ";
    getline(cin,x);
    cout<<"translation : ";
    y=x.length();

        for(int n=y;n>=0;n--)
        {
         cout<<x[n];
        }

    return 0;

}
