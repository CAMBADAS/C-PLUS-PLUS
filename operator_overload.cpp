#include<iostream>

using namespace std;

class test
{

    public:
        int p,q=20;
    void operator+(test r);
    void operator++(int x);
};
void test::operator+(test r)
{
    cout<<r.p<<endl;
}
void test::operator++(int x)
{
    q=x;
    cout<<q<<endl;
}

int main()
{
    test t,t1;
    t.p=10;
    cout<<t.p<<endl;
    t+t1;

    t1++;
return 0;
}
