#include<iostream>

using namespace std;
class Demo
{


int p,q;

public:
    int add(int p,int q)
{
    return p+q;
}
};
int main()
{
    Demo d;
cout<<add(2,3);
}
