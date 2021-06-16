// PrintLinkedList

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){
        this->data=x;
        this->next=nullptr;
    }
};

class List{
public:
    Node *head;
    Node *tail;
    List(){
        this->head=nullptr;
        this->tail=nullptr;
    }
    void Insert(int x){
        Node *node=new Node(x);
        if(!this->head){
            this->head=node;
        }
        else{
            this->tail->next=node;
        }
        this->tail=node;
    }
};

void free(Node* node){
    while(node){
        Node* temp=node;
        node=node->next;
        free(temp);
    }
}

void print(Node* head){
    while(head!=nullptr){
    cout<<head->data<<" ";
    head=head->next;
    }
}


int main() {
    List* list=new List();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        list->Insert(item);
    }
    print(list->head);
    return 0;
}