#include<iostream>
#include<iomanip>
#include<stdio.h>


using namespace std;

class emp
{
   public:
        char name[10];
        int age;
        void getdata();
        void putdata();


};
void emp::putdata()
{
    cout<<"Enter name   "<<setw(5)<<endl;
    cin>>name;
     cout<<"Enter age   "<<setw(5)<<endl;
    cin>>age;
}
void emp:: getdata()
{
    cout<<"name is "<<setw(5)<<name<<endl;
    cout<<"age is "<<setw(5)<<age<<endl;
}
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    emp earray[size];
    for(int i=0;i<size;i++)
    {
        cout<<"employee     "<<i+1<<endl;
      earray[i].putdata();
    }
     cout<<"------------------------------------------------------------------"<<endl;
            cout<<"The details of Employee"<<endl;
                    cout<<"------------------------------------------------------------------"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Employee"<<i+1<<endl<<endl;
        earray[i].getdata();
    }
    return 0;
}
