#include<iostream>
#include<string>

using namespace std;
struct stud
{
    int roll;
    string nm;



};
struct pdata
    {
            string city;
            int phn;
            struct stud s1;
    };
stud info(pdata p,stud s1)
{
    cout<<"student name     "<<p.s1.nm<<endl;
    cout<<"student roll     "<<p.s1.roll<<endl;
    cout<<"student city     "<<p.city<<endl;
cout<<"student phn      "<<p.phn<<endl;

}
int main()
{
    pdata pd;
    stud s1;
    pd.city="hyd";
    pd.phn=12345;
    pd.s1.roll=101;
    pd.s1.nm="hari";

    info(pd,s1);


    return 0;
}
