#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r=a;
    // r = 25;
    // a = 25;

    int b = 15;
    r = b;
    

    
    cout<<a<<endl<<r<<endl;
    return 0;
}