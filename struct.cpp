#include<iostream>
#include<string>

using namespace std;
struct stud
{
    int roll;
    string nm;
    char city[20];
    void info();
};
    stud  info()
    {
        stud s1,s2;
    s1.roll=101;//access of structure member
    cout<<"enter roll"<<endl;
    cin>>s1.roll;
  cout<<"enter name"<<endl;
    cin>>s1.nm;
        cout<<"enter city name"<<endl;
    cin>>s1.city;


    }

int main()
{
    stud s1;
   s1.info();

stud s2={102,"sowmya","hyd"};
s2.info();

    return 0;
}
