#include<iostream>
using namespace std;
int add(int x,int y)//addition function
{
int z;
z=x+y;
return z;
}
int main()
{
int a=10,b=111,c;
c=add(a,b);
cout<<"Sum is: "<<c;
}