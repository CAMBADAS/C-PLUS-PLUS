#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,val;
    int* p1;
    a=10;
    p1=&a;
    val=*p1;

     cout<<"p1 ="<<p1<<endl;
        cout<<"val(*p1) ="<<val<<endl;

        *p1=234;
        cout<<"p1 val       "<<*p1<<endl;
        cout<<&p1<<endl;

        int *w;
        int a1=22;

        w=&a1;
        cout<<"w val        "<<*(&w)<<endl;


}
