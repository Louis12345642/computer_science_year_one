#include<iostream>

using namespace std;

 int main()
{

//calculate logic 

std::cout << "************welcome to my c++ calculator**************" <<endl;

//variables
char op;
double num1;
double num2;
double results;

//we need somewhere to accept user input
// cout << "enter num1" << endl;
 std::cout << " Enter num1: " <<endl;

 //get the number
 std::cin >> num1;
 //number 2
 std::cout << " Enter num2: " <<endl;
 //input for it
 std::cin >> num2;

 //input for oporand
  std::cout << " Enter oparand: " <<endl;
   std::cin >> op;

   //switch statement
   switch (op)
   {
   case '+':
    results = num1 +num2;
    std::cout << results <<endl;
    break;
     case '-':
    results = num1 - num2;
    std::cout << results <<endl;
    break;

     case '/':
    results = num1 / num2;
    std::cout << results <<endl;
    break;

     case '*':
    results = num1 * num2;
    std::cout << results <<endl;
    break;
   
   default:
   std::cout << "enter valid oparand" << endl;
    break;
   }

   std::cout << "************Thank you to my c++ calculator**************" <<endl;


//we need to use switch and check for the results

//enter the operator

    return 0;
}
