#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=30;
    {
        int x=20;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
}