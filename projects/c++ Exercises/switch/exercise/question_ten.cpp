#include <iostream>
using namespace std;

int main(){

    int choice;
    cout<<"choice a number for the day of the week"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"It is monday"<<endl;
      
        break;

        case 2:
    cout<<"It is Tuesday"<<endl;
   break;

        case 3:
    cout<<"It is Wednesday"<<endl;
   break;
    
         case 4:
    cout<<"It is Thursay"<<endl;
   break;

        case 5:
    cout<<"It is Friday"<<endl;
   break;
    
         case 6:
    cout<<"It is Saturday"<<endl;
   break;

        case 7:
    cout<<"It is Sunday"<<endl;
   break;
    
    
    
    
    default:
        break;
    }




    return 0;
}