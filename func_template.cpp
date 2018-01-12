#include<iostream>
#include<string>
using namespace std;

template <class t2>
void m1(t2 p)
{
    cout<<p<<"from temp t2"<<endl;
}

template <class t,class t1>//func template overloaded
void m(t x[],t1 s)
{
    t i=0;
    for(i=0;i<5;i++)
    {
        cout<<x[i]+5<<s<<endl;
    }

}

template <class t>//func template overloaded
t add(t x,t y)
{
    return x+y;

}

int main()
{

    int a[]={1,2,3,4,5};
  string str="hello";

    m(a,str);
    m1(1234);
    cout<<add(2,3)<<endl;
    cout<<add(2.7,2.6)<<endl;

}
