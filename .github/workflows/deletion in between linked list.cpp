#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node**head_ref,int new_data){
    Node* new_node= new Node();
    new_node->data= new_data;
    new_node->next= (*head_ref);
    (*head_ref)=new_node;
}
void add(Node*prev_node,int new_data){
    if(prev_node==NULL){
        cout<<"gay";
    }
    Node* new_node= new Node();
    new_node->data= new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
void append(Node**head_ref,int new_data){
Node* new_node= new Node();
    Node*last=(*head_ref);
    new_node->data= new_data;
    
    new_node->next=NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while(last->next!=NULL){
last=last->next;
    }
    last->next=new_node;
}
void deletion(Node**head_ref,int val){
    Node*temp=*head_ref;
    if(val==Head->data){
        *head_ref=temp->next;
        free(temp);
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    
    temp->next=temp->next->next;
delete todelete;
}
 

}
void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
Node* Head=NULL;

push(&Head,2);
push(&Head,9);
push(&Head,8);
push(&Head,7);
add(Head->next->next,0);
append(&Head,4);
deletion(&Head,8);


printlist(Head);
}