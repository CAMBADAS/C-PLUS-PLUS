#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  /*  char c;
    cout<<"enter char"<<endl;
    cin.get(c);

    while(c!='\n')
    {
        cout<<c<<endl;
        cin.get(c);
    }

    char nm[20];
    cout<<"enter full name"<<endl;
    cin.getline(nm,20,' \n');
    cout<<"welcome mr   "<<nm<<endl;
    cout.fill('*');//fill with * in all unused spaces
    cout.width(20);//reserves 20 space length to display nm
    cout<<nm<<endl;
    cout.write(nm,strlen(nm));
    cout<<endl;;
    cout<<"--------------------------------"<<endl;

    cout.width(10);
    cout.precision(2);
    cout<<1.4567<<endl;

*/
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    //cout.precision(2);
   // cout<<1.234<<endl;
    cout<<"hel"<<endl;

    cout.fill('*');
    cout.setf(ios::right,ios::adjustfield);
    cout.width(10);
    //cout.precision(2);
   // cout<<1.234<<endl;
    cout<<"hel"<<endl;

cout.fill('*');
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(10);
    //cout.precision(2);
   // cout<<1.234<<endl;
    cout<<"hel"<<endl;

    cout.fill('*');
    //cout.setf(ios::scientific,ios::floatfield);
    cout.width(10);
    cout.precision(2);
   cout<<1.2341233<<endl;
    //cout<<"hel"<<endl;


    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);//displays sign before start digit
    cout.setf(ios::fixed,ios::floatfield);//fixes the point
    cout.setf(ios::internal,ios::adjustfield);
    cout.precision(3);
    cout.width(10);
    cout<<275.<<endl;
        cout<<275.1<<endl;



return 0;



}
