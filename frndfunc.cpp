#include<iostream>
#include<string.h>
using namespace std;

class A
{
    int a=10,b=20;
public :
        friend class B;
        friend void wish();
        void sub()
        {
            cout<<b-a<<endl;
        }


};
class B
{
public:
        int add(A t)
        {
            return (t.a+t.b);//private data access
        }

};
void wish()
{
    cout<<"hello"<<endl;
}

int main()
{
    A t1;
    B t2;
    cout<<t2.add(t1)<<endl;
   t1.sub();
   wish();//friend function can be called without object

    return 0;
}

