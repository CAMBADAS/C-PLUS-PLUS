#include<iostream>
using namespace std;

class test
{
public:
    int a=10;
    test(test &t)
    {
        cout<<t.a<<endl;
    }
};

int main()
{
    test x=x;


    return 0;
}
