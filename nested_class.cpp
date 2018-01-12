#include<iostream>

using namespace std;

class outer
{
public :
    int a1;
    outer(int x)
    {
        a1=x;
    }
    class inner
    {
    public:
        int a2;
        inner(int x)
        {
            a2=x;
        }
        void m2()
        {
            cout<<"am method m2 of class inner class"<<"val of a1"<<a2<<endl;

        }
    }inner_obj;
    void m1()
    {
        cout<<"am method m1 of class outer class"<<"val of a1"<<a1<<endl;
            inner_obj.m2();
    }

};

int main()
{
    outer p=10;
    p.m1();

    p.inner_obj(20);
    p.m2();

    return 0;
}
