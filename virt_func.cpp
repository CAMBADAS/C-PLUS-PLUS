#include<iostream>

using namespace std;

class test
{
public:
    int a=10,b=20;
    virtual void wish()
    {
        cout<<"hello i am base class"<<endl;
    }
};
class demo : public test
{
public:

    void wish()
    {
        cout<<"hello i am derived class"<<endl;
    }
};
int main()
{
    test *t;
    demo d;
    t=&d;
    t->wish();

}
