#include<iostream>

using namespace std;

class demo
{
public:
    int a,b;
    virtual void wish()=0;
    void setval(int x,int y)
    {
        a=x;b=y;
        cout<<a<<"  "<<b<<" hello  i am abstract class demo"<<endl;
    }
};
class demo1:public demo
{
public:
    void wish()
    {
        cout<<a+b<<"I am derived class demo1"<<endl;
    }
};
int main()
{
demo *d;//cant create
    demo1 d1;
    d=&d1;

    d->setval(2,3);
    d->wish();
}
