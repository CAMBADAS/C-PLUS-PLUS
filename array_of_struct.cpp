#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct Emp
{
    int eid;
    string enm;
    string sal;
    void details(Emp e);
};

Emp det_entry(Emp e,int siz)
{
        int k;
    for(k=0;k<siz;k++)
    {
    cout<<"enter employee id"<<k+1<<endl;
    cin>>e.eid;

    cout<<"enter employee name"<<k+1<<endl;
    cin>>e.enm;
    cout<<"enter employee sal"<<k+1<<endl;
    cin>>e.sal;
    }
}
    Emp disp(Emp e,int siz)
    {
        int i;
        for(i=0;i<siz;i++)
        {
            cout<<"id is    :"<<e.eid<<endl;
            cout<<"name is  :"<<e.enm<<endl;
            cout<<"salary is    :"<<e.sal<<endl;

        }

    }

int main()
{
    int size;
    cout<<"enter the count of the employees to enter data"<<endl;
    cin>>size;
    Emp earr[size];
    int i,cnt;
    for(i=0;i<size;i++)
    {
        det_entry(earr[i],size);
    }

    cout<<"details of Employee";
    cout<<"------------------------------"<<endl;

    for(i=0;i<size;i++)
    {

        disp(earr[i],size);
    }


    return 0;
}
