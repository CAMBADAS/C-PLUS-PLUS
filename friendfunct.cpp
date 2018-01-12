#include<iostream>
#include<string.h>
using namespace std;

class Test
{
    int a,b;

public :
        friend int add(Test t);     //friend function is used to access the private data members.
        void setval()
        {
            a=10;b=20;

        }

};

int add(Test t)
{
    return (t.a+t.b);
}

int main()
{
    Test t1;
    t1.setval();
   cout<<add(t1)<<endl;

   char *p;
    p="hello world hhh";
    cout<<p;
    return 0;
}
