#include <iostream>
using namespace std;
static int ctr=0;
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
    
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->info<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* reverseRecursive(Node* head){
    ctr++;
    
    if( head==NULL || head->next==NULL){
        
        return head;    
    }
    cout<<"check"<<endl;
    Node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int main(){
    Node* head = NULL;
    
    //cout<<"head="<<head<<endl;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    Node* newhead=reverseRecursive(head);
    display(newhead);
    cout<<ctr;
    
    return 0;
}