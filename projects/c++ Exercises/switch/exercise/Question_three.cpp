#include <iostream>
using namespace std;


int main(){
//create a variable that takes i basic salary
float hra,da,tr,da;
float basic_salary;

cout<<"Enter basic salary";
cin >> basic_salary;

//check if the basic salary is greator then or equal 500
if(basic_salary >=5000){
  hra=0.2*basic_salary;
  da =basic_salary;
  tr =500;
}
else if (basic_salary >3000  && basic_salary<5000)
{
  hra =0.1*basic_salary;

 da =0.8*basic_salary;

}
// else{hra = 0.1 * basic_salary;da = 0.6 * basic_salary; tr =}
else{

        hra = 0.1 * basic_salary;
        da = 0.6 * basic_salary;
        tr = 200;
}

 float gross_salary = basic_salary + hra + da + tr;

cout<<"Basic Salary: FRW"<< basic_salary<<endl;
cout<<"House Rent Allowance: FRW"<< hra<<endl;
cout<<"Daily Allowance: FRW"<< da<<endl;
cout<<"Transport Allowance: FRW"<< tr<<endl;
cout<<"Gross Salary: FRW"<< gross_salary<<endl;

    return 0;
}


