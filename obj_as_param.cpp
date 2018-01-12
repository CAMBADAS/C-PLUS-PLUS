#include<iostream>
#include<string.h>
using namespace std;
void wish();
class Test
{
public:
    int x=10,y=20;
    void m(Test t);
    void wish()
    {
        cout<<"Welcome to c++"<<endl;
    }
};
void Test::m(Test t)
{
    t.wish();
    cout<<t.x+t.y<<endl;
}
int main()
{
    Test t;
    t.m(t);
}
