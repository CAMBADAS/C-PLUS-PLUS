#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<string> vect;
    int i;

    if(vect.empty())
    {
             cout<<"vector is full"<<endl;
    }
    else
    {

         cout<<"enter the elements"<<endl;
            for(i=0;i<vect.size();i++)
            {

                cin>>vect[i];
            }

    }

    for(i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<endl;
    }

    cout<<"size of vector before clear()"<<vect.size()<<endl;

    vect.clear();
     cout<<"size of vector after clear()"<<vect.size()<<endl;


    return 0;
}
