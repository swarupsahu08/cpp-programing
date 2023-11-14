#include<iostream>
using namespace std;
int main()
{
    // cout<<"First vankar"<<endl;
    // cout<<"Hello welcome here"<<endl;

    string phrase ="Business world";
    cout<<phrase<<endl;
    
    cout<<"The length of the string is "<<phrase.length()<<endl;  //str.length gives the length of the string

    cout<<"The character in the string "<<phrase[3]<<endl;  //string can be indexed from 0 and every character is indexed starting from zero and str[0],str[1],....etc would print the characters in the program

    phrase[0]='H';
    cout<<phrase<<endl; //Manipulating the characters of the string using the indexing method

    cout<<phrase.find("world",0)<<endl; //FInding the specified substring from the required string str.find("required substring",index from which it would start)

    cout<<phrase.substr(9,3)<<endl;  //To get the substring from the string str.substr(index start(inclusive),length of the substring)

    string phrasesub=phrase.substr(9,3);
    cout<<phrasesub<<endl;  //Using another variable for the substring then printing the substring from the string

    string newphrase=phrase.append("Here"); // It is used to append a new string to available string
    cout<<newphrase<<endl;

    cout<<phrase.at(2); //Here it gives the character at the specified index
    



    return 0;
}