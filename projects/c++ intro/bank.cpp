
#include <iostream>

using namespace std;


//steps
//function to deposite
//function to withdraw
//function to chech balance

double deposite(double balance , double amount){

 double newAccountB = amount + balance;
 return newAccountB;

    //we a varible that hold the account balance 

    //accept it as arguement and adds the amount to it

}
int main(){

    
  //amount to deposite

  double amount;

    // this is the acount balance 
  double accountBalance;
  accountBalance =deposite(accountBalance,amount);

//the console ui
cout << "**********************" << endl;


cout << "1 Deposite" << endl;
cout << "2 Withdraw" << endl;

cout << "3 Balance" << endl;
// cout << "2 Withdraw" << endl;

/// checking the condition for the user

 int choice;

cout << "What do you want to do" << endl;
 cin >> choice;
switch (choice)
{
case 1:
  cout << "Wanna deposite enter amount" <<endl;
  cin >> amount;
  deposite( accountBalance,amount);
 cout << "You successfuly deposited" << accountBalance << endl;
    
    break;

default:
     cout << "ENTER AVALID CHOICCE BABY";
    break;
}

cout << "**********************" << endl;


    return 0;
}
