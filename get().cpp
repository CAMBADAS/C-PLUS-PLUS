#include <iostream>
#include <iomanip>
#include<cstring>

 using namespace std;

 int main()
 {
 /*char ch;
string s;
 cout << "press y/n.";
 cin>>ch;
 cout<<ch;
 cout<<"enter string"<<endl;
 cin>>s;
 cout<<s<<endl;

 string name;
 string city;

 cout << "Please enter your name: "<<endl;
 cin>>name;

 //getline(cin, name);

 cout << "Enter the city you live in: ";
cin>>city;
// getline(cin, city);

 cout << "Hello, " << name << endl;
cout << "You live in " << city << endl;

const int SIZE = 12;
char name1[SIZE],
 name2[SIZE];

 strcpy(name1, "Sebastian");
 cout << "name1 now holds the string " << name1 << endl;

 strcpy(name2, name1);
 cout << "name2 now also holds the string " << name2 << endl;

 */

 const int SIZE = 100;
char sentence[SIZE];

 cout << "Enter a sentence: ";
 cin.getline(sentence, SIZE);
 cout << "You entered " << sentence << endl;


 return 0;
 }
