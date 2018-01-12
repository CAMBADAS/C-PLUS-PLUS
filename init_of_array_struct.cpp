#include<iostream>
#include<string>

using namespace std;

struct stud
{
    int roll;
    string nm;
    string city;
};
int main()
{
    stud s[3]={101,"sam","hyd",
                102,"alekya","pune",
                103,"ram","delhi"};
    int i;
    for(i=0;i<3;i++)
    {
        cout<<s[i].roll<<"\t"<<s[i].nm<<"\t"<<s[i].city<<"\t"<<endl;


    }
     cout<<&s[0]<<endl;
     cout<<&s[1]<<endl;
     cout<<&s[2]<<endl;
}
