#include <iostream>;
using namespace std;

int main(){
    //create varibale age

    int age;
    //tell the user to enter there age

    cout <<"Enter your age:"<<endl;
    cin>>age;
    if (age>25 || age==25)
    {
       cout <<"You are allowed to take vaccine"<<endl;
    }
    else if(age<=18){
cout <<"You are young to take vaccine"<<endl;

    }
       else if(age>=55){
cout <<"You are too old to take vaccine"<<endl;

    }
         else  if(age == 17 || age == 18){
cout <<"You are soon going to take vaccine"<<endl;

    }
    




    return 0;
}
