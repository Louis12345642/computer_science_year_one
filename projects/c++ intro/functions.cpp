#include <iostream>

using namespace std;


//use void if u are not returning any value

  void getFulname(std::string name){
    std::string testing = "hello there guys";
        std::cout << "hello worl my people  " << name << endl;
             std::cout << "hello worl my people  " << name << endl;
                  std::cout << "hello worl my people  " << testing << endl;
                       std::cout << "hello worl my people  " << name << endl;

      
  }

  //creating a function that calculate the area of a square in c++

  double area( double length){
    return length * length;
  }



int main(){

    std::string name = "mubarak";
    getFulname(name);

    double len = 20;

    double A = area(len);
    std::cout << "the area is: " << A << endl;
    return 0;
}