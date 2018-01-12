#include<iostream>
using namespace std;
int main()
{
    int *a;
    cout<<sizeof(a)<<endl;

    a=new int[100];
    cout<<sizeof(a);
    delete a;

    return 0;
}
