#include<iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout<<"parent constructor"<<endl;
    }
    void show()
    {
        cout<<"i am in parent"<<endl;
    }
};
class child:public Parent
{
   public:
    child()
   {
       cout<<"child constructor"<<endl;
   }
   child(int x)
   {
       cout<<"child constructor "<<x<<endl;
   }
    void wish()
    {
        cout<<"i am method from child"<<endl;
    }
};
int main()
{
    child c1;
    c1.show();
    child c2=3;
    c2.show();
}
