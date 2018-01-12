#include<iostream>

using namespace std;
class test
{
public:

    void add(int x,int y=10)
    {
        cout<<"x ="<<x<<"           y ="<<y<<endl;

    }
};



int main()
{
    test t;
    t.add(2,4);
    t.add(2);

    return 0;
}
