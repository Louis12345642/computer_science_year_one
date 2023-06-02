#include <iostream>

using namespace std;

class billBoard {
public:
    string title;

    void setTitle(string t){
   title=t;
    }

    string getTitle(){
        return title;
    }

};


int main(){

billBoard bill;
bill.setTitle("Hello oop");
string title=bill.getTitle();

cout<<title<<endl;

    return 0;
}