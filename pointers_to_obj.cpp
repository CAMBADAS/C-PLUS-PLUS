#include<iostream>

using namespace std;

class demo
{
public:
    int a;

        void disp(int x);

};
    void demo:: disp(int x)
    {
        cout<<x<<endl;

    }
int main()
{
    demo *d=new demo;//a dynamic object created
d->a=123;
cout<<d->a<<endl;
d->disp(203);


      cout<<&d<<endl;
      return 0;
}
