#include <iostream>;
using namespace std;

int main(){
//declare the varibale that will store the number 

int number;

//ask the user to enter a number

cout<<"Enter a number"<<endl;

cin>>number;
//check if the number is event or odd

if (number %2==0)
{
    cout <<"The number you entered is an even number"<<endl;
}
else{
    cout <<"The number you enter is an odd number" <<endl;
}

    return 0;
}
