#include<iostream>

using namespace std;

class demo
{
public :
    int phn;
    char *name;
    demo(int p,char *nam)
    {
        phn=p;
        name=nam;

        display();
    }
    void display()
    {
            cout<<name<<"   "<<phn<<endl;
    }
    void set(int q,char * w)
    {
        phn=q;name=w;
    }
    void wish()
    {
        cout<<"hello"<<endl;
    }

};
int main()
{
    demo const d(1234,"ramya");
    demo  d1(1111,"hari");
    d1.wish();
    d1.set(000,"xyz");
    d1.display();
        return 0;

}
