#include <iostream>
using namespace std;

int main(){
int sum=0;
int arrSize=5;

int numbers[5]={};

for (int i = 0; i <arrSize; i++)
{

    cout<<"Enter the marks of the student: "<<i+1<<endl;
    cin>>numbers[i];
    sum+=numbers[i];
}


cout<<"The sum of the numbers is: "<<sum<<endl;





    return 0;
}