#include <iostream>
using namespace std;



class Node{
    public:
    int value;
    Node* next;

};

void printAllNodes(Node*n){

    while (n !=NULL)
    {
      cout<<n->value<<endl;
      n=n->next;

    }
    

}
int main(){

    //initial the values of the nodes

Node*head = new Node();
Node *second = new Node();
Node *third = new Node();


head->value = 1;
head->next=second;
second->value =2;
second->next=third;
third->value =3;
third->next=NULL;

printAllNodes(head);

    return 0;
}
