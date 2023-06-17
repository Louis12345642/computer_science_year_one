#include<iostream>
using namespace std;

void twoSum(int nums[],int target){
  
    int first =0;
for ( int i = 1; i < 3; i++)
{
   if(nums[first] +nums[i] == target){
    cout<<"the indices are: "<<first<<","<<i<<endl;

   }
   else{
    first=i;
   }
}
    }
    

int main(){

    int numbers[3]={3,2,4};
    // [3,2,4]
    int target =6;
    twoSum(numbers,target);


    return 0;
}