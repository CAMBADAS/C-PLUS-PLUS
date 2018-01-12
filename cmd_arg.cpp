#include<iostream>
using  namespace std;

int main(int argc,char *argv[],char **envp)
{
    int i;
    cout<<"count of arg             :"<<argc<<endl;
    cout<<"name of prog             :"<<argv[0]<<endl;
    cout<<"\n elements are :        "<<endl;
    for(i=0;i<argc;i++)
    {
        cout<<argv[i]<<endl;
    }
    for(i=0;i<argc;i++)
    {
        cout<<envp[i]<<endl;
    }

}

