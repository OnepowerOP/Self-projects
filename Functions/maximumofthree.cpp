#include<iostream>
using namespace std;
int maximum(int a, int b, int c)
{
    if (a>b && a>c) //if else under function
    return a;

    else if(b>a && b>c)
    return b;

    else 
    return c;

}
int main()//main function
{
    int a=12,b=14,c=43,d;
    d=maximum(a,b,c);
    cout<<"Maximum is: "<<d;
    return 0;
}