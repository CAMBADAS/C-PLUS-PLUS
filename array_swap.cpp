#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>

void swap(int a[],int b[],int temp[]);
void show(int arrA[],int arrB[]);
using namespace std;

int main()
{
            int arrA[10]={2,4,6,8,10,1,2,3,4,5};
        int arrB[10]={0,0,0,0,0,0,0,0,0,0,};
        int temp2[10];


        int i;
        swap(arrA,arrB,temp2);
        show(arrA,arrB);


return 0;
}
      void  swap(int arrA[],int arrB[],int temp2[])
      {
          int j;
          int temp1[10];
                            for(j=0;j<10;j++)
                            {
                                temp2[j]=arrB[j];//temp2 is a string array
                                arrB[j]=arrA[j];

                                temp1[j]=int(temp2[j]);
                                arrA[j]=temp1[j];
                            }
                cout<<"done swapping"<<endl;
      }
    void show(int arrA[],int arrB[])
    {
        int i;
        cout<<"contents of array before swapping"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        for(i=0;i<10;i++)
        {

            cout<<left<<setw(3)<<arrB[i]<<","<<right<<setw(3)<<arrA[i]<<endl;
        }

                cout<<"contents of array after swapping"<<endl;
        cout<<"----------------------------------------------------------"<<endl;


        for(i=0;i<10;i++)
        {

             cout<<left<<setw(3)<<arrA[i]<<","<<right<<setw(3)<<arrB[i]<<endl;
        }
    }



