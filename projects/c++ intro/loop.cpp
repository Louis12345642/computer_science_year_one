#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

std::string name;
    //our programm get input from the user and if the imput exists it should generate random number and run it infinitely

    std::cout << "enter your name" << endl;
    std::cin >> name;

    while (1==1) 
    {
    std::cout << rand() << endl;
    }
    
    return 0;
}