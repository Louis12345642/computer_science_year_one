#include<iostream>
using namespace std;


class Franchise{
public:
   void KFC(){
    cout << "we are have some baddest kfc";
   }

   void Chicken(){
    cout<<"we eat chicken"<<endl;
   }

};

int main(){

Franchise fcb;

fcb.Chicken();
fcb.KFC();


    return 0;
}