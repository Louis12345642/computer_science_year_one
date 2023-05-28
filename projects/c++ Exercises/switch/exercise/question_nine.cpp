#include <iostream>
using namespace std;


int main(){



    //create a variable to store marks and sum
    float marks;
    float sum=0;
    float i=0;

    //create a looop to allow the user to enter five diffent subject marks
    while (i<3)
    {
        //tell the user to enter subjects
        cout<<"Enter subject: "<<i+1<<endl;
        cin >> marks;
        sum=sum+marks;
        i++;
    }

    float average=(sum/3);
    if (average>=90)
    {
      cout<<"you have got A : "<<average<<endl;
    }
     else if (average>=80 && average <=89)
    {
      cout<<"you have got B : "<<average<<endl;
    }

     else if (average>=70 && average <=79)
    {
      cout<<"you have got C : "<<average<<endl;
    }

     else if (average>=60 && average <=69)
    {
      cout<<"you have got D : "<<average<<endl;
    }
     else if (average>=40 && average <=59)
    {
      cout<<"you have got D : "<<average<<endl;
    } else if (average<40)
    {
      cout<<"you have got F : "<<average<<endl;
    }



// Note:
// •	average >= 90: Grade A
// •	average >= 80: Grade B
// •	average >= 70: Grade C
// •	average >= 60: Grade D
// •	average >= 40: Grade E
// •	average < 40: Grade F
	


    return 0;
}