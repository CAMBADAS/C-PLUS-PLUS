#include<iostream>
using namespace std;

class test
{
public:
    int a;
    char *str;
    test()
    {
        a=123;
        str="qwerty";
        cout<<"constructor invoked"<<endl;
    }
    ~test()
    {
        cout<<"object destroyed memory released..."<<endl;
    }
    void show()
    {
        cout<<"val of a     "<<a<<endl;
        cout<<"str val      "<<str<<endl;

    }
};
int main()
{
    test *t=new test;

    t->show();

    delete t;



}
