#include<iostream>
#include<string.h>
using namespace std;
class stud
{
private:
    int roll;
    char name[20];
public :
    void setdata(int r,char *nm);
    void info();
};
  void  stud ::info()
    {
        cout<<"name is"<<name<<endl;
        cout<<"roll is "<<roll<<endl;
    }
    void stud::setdata(int r,char *nm)
    {
        roll=r;
      //  name=nm;
        strcpy(name,nm);
    }

int main()
{
    stud s1;
    stud s2;
    s1.setdata(1,"ram");
    s1.setdata(101,"ramya");
    s1.info();

    //s1.roll=122;

    s1.info();
    return 0;
}
