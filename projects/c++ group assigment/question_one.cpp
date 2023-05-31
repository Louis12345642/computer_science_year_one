#include <iostream>
using namespace  std;


//write a program conte=aining two functions that returns the values. the first function returns  the highest  of the 
// entered by the . the second function returns the lowest of the number . the paramemters of the function is entered through the main function

int GetTheGreatNum( int a , int b){
    if (a<b)
    {
      return b;
    }
    else if(a==b){

        return a;
    }
    else{
        return a;
    }
    
}

int GetLowestNum(int a , int b){

     if (a>b)
    {
      return b;
    }
    else if(a==b){

        return a;
    }
    else{
        return a;
    }
}
int main(){

    int a=5;
    int b=7;
    int results=GetTheGreatNum(a,b);
    int lowestNum=GetLowestNum(a,b);



    cout<<"the biggest number is:"<<results<<endl;

     cout<<"the smallest number is:"<<lowestNum<<endl;


    return 0;
}