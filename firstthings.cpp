#include <iostream>
using namespace std;
class Node{
    public:
    int info;
    Node* next;
    Node (int val){
        info=val;
        next=NULL;
    }
};
void insertAtTail(Node* &head, int val){
    Node* n= new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp= head;
    while(temp->next != NULL){
        temp=temp->next;
      
    }
    temp->next=n;
}

void display(Node* head){
    cout<<endl;
    cout<<"head "<<head<<endl;
    cout<<"head->info "<<head->info<<endl;
    cout<<"head->next "<<head->next<<endl;
    Node* temp = head;
    while(temp != NULL){
        cout<<"temp->info  "<<temp->info<<" "<<endl;
        temp=temp->next;
        cout<<"head "<<head<<endl;
        cout<<"head->info "<<head->info<<endl;
        cout<<"head->next "<<head->next<<endl;
    }
}
int main(){
    Node* head = NULL;
    cout<<"head="<<head<<endl;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    
    return 0;
}