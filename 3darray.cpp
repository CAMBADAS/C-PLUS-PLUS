#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    int a[3][3][3];

   // cout<<"enter the elements"<<endl;
    int i,j,k;
    for(i=0;i<3;i++)
    {cout<<"enter elemnts for row "<<i<<endl;
            for(j=0;j<3;j++)
            {
                //cout<<"enter elemnts for column "<<j<<endl;
                        for(k=0;k<3;k++)
                        {
                            cin>>a[i][j][k];
                        }
            }
    }
    cout<<"entered elemnts are"<<endl;
    for(i=0;i<3;i++)
    {
               for(j=0;j<3;j++)
            {
                        for(k=0;k<3;k++)
                        {
                            cout<<a[i][j][k];;
                        }
                        cout<<endl;
            }
            cout<<endl;
    }

}
