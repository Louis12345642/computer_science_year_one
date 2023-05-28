#include <iostream>
using namespace std;


int main(){

    //create a variable to store marks and sum
    float marks;
    float sum=0;
    float i=0;

    //create a looop to allow the user to enter five diffent subject marks
    while (i<5)
    {
        //tell the user to enter subjects
        cout<<"Enter subject: "<<i+1<<endl;
        cin >> marks;
        sum=sum+marks;
        i++;
    }
//calculting the percentage


    float percentage =(sum/500)*100;
 
    if (percentage >=60)
    {
    cout<<"You got first Division: "<<percentage<<"%"<<endl;
    }
    else if (percentage >=50 && percentage <=59)
    {
  cout<<"You got second Division: "<<percentage<<"%"<<endl;  
    }
    else if (percentage >=40 && percentage <=49)
    {
  cout<<"You got Third Division:"<<percentage<<"%"<<endl;  
    }
     else if (percentage <40)
    {
  cout<<"You got have failed: "<<percentage<<"%"<<endl;  
    }
    
    

    return 0;
}