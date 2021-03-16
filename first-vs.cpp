#include <iostream>
using namespace std;
struct Node{
    int info;
    Node* next;
};
Node* createnewptr(int n){
    Node* ptr= new Node;
    ptr->info=n;
    ptr->next=NULL;
    return ptr;
}
int main(){
    Node* head=NULL;
    int inf;
    cin>>inf;
    //inf=4;
    Node* newptr = createnewptr(inf);
    cout<<head<<endl<<newptr->info<<" "<<newptr->next;
    return 0;
}