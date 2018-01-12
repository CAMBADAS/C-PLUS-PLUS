#include<iostream>
#include<string>

using namespace std;

class Demo
{
public:
    int a,b;
public :
    Demo(int x,int y);
   friend void add(int x,int y);
};
Demo :: Demo(int x,int y)
{
    a=x;
    b=y;
    cout<<"Data Initialised..."<<endl;
}
void add(int p,int q)
{
    cout<<"addition of "<<p<<"&"<<q<<"is "<<p+q<<endl;
}

int main()
{
    Demo d(5,3);
    add(d.a,d.b);
}
