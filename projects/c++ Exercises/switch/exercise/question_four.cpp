#include <iostream>

using namespace std;

int main(){
//creating avariable i


int i;

cout <<"Enter any number" <<endl;


cin>>i;
if (i<0)
{
cout<<i<<": is a negative number"<<endl;
}
else if (i==0)
{
cout<<i<<": is not postive or negative number"<<endl;
}
else{
    cout<<i<<": is a positive number"<<endl;
}


    return 0;
}