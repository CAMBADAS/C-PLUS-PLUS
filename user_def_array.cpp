#include<iostream>
#include<string.h>
using  namespace std;

class  emp
{
public :
    int id;
    char *nm;
    char *brnch;
public:

    void setdata(int ID,char *NM,char *BR)
    {
        id=ID;
        strcpy(nm,NM);
        strcpy(brnch,BR);
    }
    void getdata()
    {
        cout<<"id is        "<<id<<endl;
        cout<<"name is        "<<nm<<endl;
        cout<<"brnch is        "<<brnch<<endl;

    }
    void show()
    {
        cout<<"fdsfdjsf"<<endl;
    }

};
int main()
{
    emp reg[5];
    int i;
    int eid;
    char *enm;
    char *ebrnch;

    for(i=0;i<5;i++)
    {
        reg[i];
        cout<<"enter id"<<endl;
        cin>>reg[i].id;
        cout<<"enter ename"<<endl;
        strcpy(reg[i].nm);
        cout<<"enter ebrch"<<endl;
        cin>>reg[i].brnch;
           }

    for(i=0;i<5;i++)
    {
        reg[i].getdata();
    }
    return 0;
}
