#include <iostream>
using namespace std;
int main(){

int marks;
int sum =0;
int i=1;
while (i<=5)
{
cout <<"Enter mark:"<<i+0<<endl;
cin >> marks;
sum= sum + marks;
i++;
}
int average = sum/5;

cout<< "the average of the marks is :"<<average<< endl;

    return 0;
}