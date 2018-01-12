#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>

void show(int intArr[],int size);
using namespace std;


int main()
{
    int arrA[10]={2,4,6,8,10,1,2,3,4,5};

        int i;
        show(arrA,10);


return 0;
}
    void show(int a[],int s)
    {
        int i;
        for(i=0;i<s;i++)
        {
            cout<<a[i]<<endl;
        }
    }



