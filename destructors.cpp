#include<iostream>
#include<string>

using namespace std;

class Demo
{
public:
    int a,b;
public :
    ~Demo();
   friend void add(int x,int y);
};
Demo :: ~Demo()
{

    cout<<"Object destroyed.."<<endl;
}
void add(int p,int q)
{
    cout<<"addition of "<<p<<"&"<<q<<"is "<<p+q<<endl;
}

int main()
{
    Demo d;
    d.add(5,5);
}
