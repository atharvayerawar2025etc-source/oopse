#include <iostream>
using namespace std;

float add(float i, float j, float k)
{
    return (i+j+k);
}
int add (int a, int b)
{
    return (a+b);
}
int add(float m, float n)
{
    return (m+n);
}
int main()
{
     cout<<add(50.5f, 60.5f, 70.5f)<<endl;
     cout<<add(50, 60)<<endl;  
     cout<<add(40.5f, 50.4f)<<endl;      
}
