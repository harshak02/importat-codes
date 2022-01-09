#include<iostream>
using namespace std;

class node{

    public :
    int data;
    node *next;

    node(int val){
        data = val;
        node * next = NULL;
    }
};

node * insertAtEnd(node *head,int data){

    node *ptr;
    ptr = new node(data);
    node *p;
    p = head;

    if(p==NULL){
        ptr = head;
        return ptr;
    }

    while(p->next!=NULL){
        p = p->next;
    }

    p->next = ptr;

    return head;
}

void traversal(node * head){

    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

int main(){

    int size;
    cout<<"Enter the size of the linked list"<<endl;
    cin>>size;

    node * head = NULL;

    for(int i = 0;i<size;i++){
        int temp;
        cout<<"Enter the element number "<<i+1<<endl;
        cin>>temp;
        head = insertAtEnd(head,temp);
    }

    traversal(head);

    return 0;
}
