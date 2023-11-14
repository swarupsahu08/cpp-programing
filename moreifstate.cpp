#include<iostream>
using namespace std;

int getMax(int num1,int num2){
    int result;
    if(num1>num2){
        result=num1;
    } else{
        result=num2;
    }
    return result;
}


int getmaxthree(int num1,int num2,int num3){
    int result;
    if (num1>=num2 && num1>=num3)
    {
        result=num1;
    }
    else if (num2>=num3 && num2>=num1)
    {
        result=num2;
    }
    else
    {
        result=num3;
    }
    
    return result;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    // cout<<"The result is "<<getMax(a,b)<<endl;
    cout<<"The largest among the three numbers is "<<getmaxthree(a,b,c);
    return 0;
}