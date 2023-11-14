#include<iostream>
using namespace std;
int main()
{
    string color,pluralNoun,celebrity;
    cout<<"Enter a colour "<<endl;
    getline(cin,color);
    cout<<"Enter the plural noun "<<endl;
    getline(cin,pluralNoun);
    cout<<"Enter the celebrity name "<<endl;
    getline(cin,celebrity);
    cout<<"Roses are "<<color<<endl;
    cout<<pluralNoun<<" are blue "<<endl;
    cout<<"I love "<<celebrity<<endl;
    return 0;
}