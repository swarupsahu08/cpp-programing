#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        cout<<i<<endl;
    }

    // Here is how a for loop works in program
   /* for (initialization; condition; updation)
    {
        .......
         code....
    }  */  

    // Using for loop to iterete within the array
    int nums[]={1,2,5,7,3};
    for (int i = 0; i < 5; i++)
    {
        cout<<nums[i]<<endl;
    }
    


    

    return 0;
    
}