#include <iostream>

using namespace std;

int main(){
//creating avariable 
int readingOneStart=200;
float readingOneEnd=500;
float usedReading=readingOneEnd-readingOneStart;
float priceOne=usedReading*3.50;



cout<<"The price consumsion one is: "<<priceOne<<" FRW"<<endl;

int readingTwoStart=100;
float readingTwoEnd=200;
float usedReadingTwo=readingTwoEnd-readingTwoStart;
float priceTwo=usedReadingTwo*2.50;
cout<<"The price consumsion two is: "<<priceTwo<<" FRW"<<endl;


int readingThreeStart=0;
float readingThreeEnd=100;
float usedReadingThree=readingTwoEnd-readingThreeStart;
float priceThree=usedReadingThree*1.50;
cout<<"The price consumsion two is: "<<priceThree<<" FRW"<<endl;

// No of Units Consumed                       Rates in (FRW)
// 200-500                                                   3.50
// 100-200                                                   2.50
// Less 100                                                  1.50

    return 0;
}