#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  //variables
  std::string boy;
  std::string girl;

  int boyValue;
  int girlValue;
  int results;

    //the logic of the love tester
    //an iput tp enter your name
    std::cout << "Enter your boys name"<< endl;
    std::cin >> boy;


    //an input to enter your lovers name

    cout << "enter your girls name " << endl;
    std::cin >> girl;
    //get random number to represent the love percentage of ur love 

    //check if there is name for the girl generate a number from 1-50 
    if (girlValue && boyValue)
    {
   
   girlValue = rand()% 50 + 1;
   boyValue = rand() % 40 + 1;

   results = girlValue + boyValue;

   cout << "your love results are " << results <<"%" <<endl;
    }
    


     //check if there is name for the boy generate a number from 1-50 


     //add the two nnumbers together anad give the results


    return 0;
}
