#include<iostream>
#include<string>

using namespace std;

class A
{

    int a,b;
public :


    A(int x,int y):a(x),b(y)
    {
        cout<<"constructor A"<<endl;
        cout<<a<<endl<<b<<endl;
    }
    void m1()
    {
        cout<<"am method in class A"<<endl;
    }
};
class B
{


public:
    void m1()
    {
        cout<<"am rewritten method in class B"<<endl;
    }
    void m2()
    {
        cout<<"am method in class B"<<endl;
        m1();

    }
};
class C :public B
{

public:
        C()
    {
        cout<<"default constructor"<<endl;
    }
public:

    void m3()
    {
        cout<<"FROM CLASS C"<<endl;
        m1();
        m2();
    }
    void m1()
    {
        cout<<"am rewritten method in class C"<<endl;
    }
    void m2()
    {
        cout<<"am method in class C"<<endl;
        m1();

    }
};
int main()
{
    A g(5,3);//constructor call
//    A g;
    C obj;
    obj.m3();
}
