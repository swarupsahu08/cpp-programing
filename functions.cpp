#include<iostream>
using namespace std;

void sayHi(string name,int age){
    cout<<"Hello "<<name<<" you are "<<age;
}
int main()
{
    cout<<"Top"<<endl;
    sayHi("Mike",60);
    sayHi("Steve",45);
    cout<<"bottom\n";
    return 0;
}