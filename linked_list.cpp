#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
};
void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if (head==NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;           // n->next is already NULL     

}
void deleteAtHead (Node* head){
    Node* todel = head;
    head = head->next;
    delete todel;
}
void deleteNode (Node* &head, int val){
    if (head == NULL)
        return;
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    Node* temp= head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todel = temp->next;
    temp->next=temp->next->next;
    delete (todel);
}

Node* reverse(Node* &head){
    
    Node* prevptr=NULL;
    Node* currentptr=head;
    Node* nextptr;
    while(currentptr!=NULL){
        nextptr = currentptr->next;
        currentptr->next=prevptr;
        prevptr= currentptr;
        currentptr=nextptr;
    }
    return prevptr;
}

Node* reverseRecursive(Node* &head){
    if ( head==NULL || head->next==NULL)
        return head;
    Node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}
Node* reverseKNode (Node* &head, int k){
Node* prev = NULL;
Node* curr = head;
Node* nextp;
int count=0;
while (count<k && curr != NULL){
    nextp = curr->next;
    curr->next = prev;
    
    prev = curr;
    curr = nextp;
    count ++;
}
if (nextp!=NULL){
    head->next=reverseKNode(nextp,k);
}
return prev;
}

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;      
    }
    cout<<"NULL"<<endl;
}

int main(){
Node* head = NULL;
for (int i=1; i<=6; i++){
    insertAtTail(head,i);
}
display(head);
//deleteNode(head,3);
//Node* newhead = reverseRecursive(head);
//display(newhead);

//Node* oldhead = reverse(newhead);
//display(oldhead);

int k =2;
Node* nodesalot = reverseKNode (head, k);
display(nodesalot);

}