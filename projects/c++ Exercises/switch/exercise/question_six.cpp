#include <iostream>

using namespace std;

int main(){
//creating avariable i
float subject1,sum,average;
int i=0;
while (i<4)
{
  cout<<"Enter number" <<i+1<<endl;
  cin>>subject1;
sum+=subject1;
  i++;
}


average=sum/4;


//creating avording to the average mark

if (average >34 && average <50)
{
 cout<<"The grade will be :A"<<endl;
}
else if (average >49 && average<60 )
{
 cout<<"The grade will be :B"<<endl;
}
else if (average >60 && average<75 )
{
 cout<<"The grade will be :C"<<endl;
}
else if (average >75 && average<100 )
{
 cout<<"The grade will be :D"<<endl;
}
else if (average <35 )
{
 cout<<"The grade will be :E"<<endl;
}

    return 0;
}