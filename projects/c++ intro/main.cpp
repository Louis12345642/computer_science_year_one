#include <iostream>
using namespace std;

namespace first {
    int x =10;

}
// namespace first {



int main()
{
    // cout << "hello world" << endl;
    // int age = 20;
    // int x = 10;
    // int y = 40;
    // int sum = x+y;

    // bool student = true;

    // std::string name = "mubarak";

    // cout << student << endl;b
    // cout <<  sum <<endl;
    // cout << "your name is " << name << endl;

    //write a c++ program that calculate the circumference of a circle 

    const double PI = 3.14;
    int radius = 7;
    double circumference = PI * radius * 2;
    cout << "circumference = " << circumference << "cm" << endl;


    int x = 0;
     
    //  creating a custom type 
    //  typedef std::string < std::int text_t;

    // number_t = int;
     std::cout << x << endl;
 
    

     std::cout << first::x << endl;

    //  std::cout << kual << endl;

     // writing a progam that get the percentage of some thing

     int questions = 10;
     int correct = 6;

     double percent =( correct/(double)questions) * 100;


     cout << percent << "%" << endl;



     // writing a program that gets an input from the user 


     cout << "what is your name: " <<endl;

     std::string name;
     std::cin >> name;


     cout << "hello "<< name <<endl;

     int age = 20;

    //  int numbers = [1,3,4,5,6,7,6];

     cout << numbers << endl;
     if(age < 18){
        cout << "you are still young" <<endl;
     }
     else if(age > 18){
        cout << "your big broo" << endl;
     }



    return 0;
}

