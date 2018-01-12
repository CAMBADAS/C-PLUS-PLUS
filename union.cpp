#include<iostream>
#include<string>
#include<cstdlib>


using namespace std;

union stud
{
    float roll;
    short s;
    //int roll;
    //char nm[10];
    //char city[10];
};
int main()
{
    stud s[3]={10.1,10.1,10.1};
    int i;
    for(i=0;i<3;i++)
    {
        cout<<s[i].roll<<endl;
        //<<"\t"<<s[i].nm<<"\t"<<s[i].city<<"\t"<<endl;


    }
    cout<<sizeof(s[3])<<endl;
     cout<<&s[0]<<endl;
     cout<<&s[1]<<endl;
     cout<<&s[2]<<endl;
}
