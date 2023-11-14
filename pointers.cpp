#include<iostream>
using namespace std;
int main()
{
    // int age=19;
    // double gpa=2.7;
    // string name="Mike";
    //Pointers is the memory address of any variable container
    // cout<<"The memory address for age variable is "<<&age<<endl;
    // cout<<"The memory address for gpa variable is  "<<&gpa<<endl;
    // cout<<"The memory address for name variable is  "<<&name<<endl;

    //How to create a pointer variable:
    int age=19;
    int *pAge=&age;

    double gpa=2.7;
    double *pGpa=&gpa;

    string name="Mike";
    string *pName=&name;

    // cout<<pAge<<endl;

    //Dereferencing the pointer variable means the value stored inside the variable
    cout<<*pAge<<endl;
    cout<<*&gpa<<endl; //it will give the value stored inside the variable"gpa"
    cout<<&*&gpa<<endl;  //it ois gonna give the address of the gpa variable or(the memory address of variable gpa)
    

    return 0;
}