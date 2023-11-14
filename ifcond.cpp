#include<iostream>
using namespace std;
int main()
{
    bool isMale=false;
    bool isTall=false;

    if (isMale && isTall)
    {
        cout<<"YOu are a tall male\n";
    }
    else if(isMale && !isTall){
        cout<<"You are a short male\n";
    }
    else if(!isMale && !isTall)
    {
        cout<<"You are tall but not  male\n";
    } else{
        cout<<"You are not male and not tall\n";
    }
    
    return 0;
}