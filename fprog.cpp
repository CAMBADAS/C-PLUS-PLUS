#include<iostream>
using namespace std;
int add(int x,int y);
int add(int x,int y,int z);
inline big(int x,int y)
{
    if(x>y)return x;
    else return y;
}
int x=10,y;
int add(int a=1,int b=2,int c=3)
{
    return a*b*c;
}

int main()
{
    int x=100,y;
    y=20;

    int &z=y;
    cout<<z<<endl;
    z=30;
   // cout << "enter values of x y" << endl;
    //cin>>x>>y;
//   cout<<"the sum  is :"<< add(::x,y)<<endl;

   cout<<"fn overloaded the multip  is :"<< add(x,y,z)<<endl;

   cout<<"fn overloaded the multip  is :"<< add()<<endl;//when param not mentioned


   cout<<"global the big  is :"<< big(::x,y)<<endl;
cout<<"local the big  is :"<< big(x,y)<<endl;

    return 0;
}
int add(int a,int b)
{
    return a+b;
}

