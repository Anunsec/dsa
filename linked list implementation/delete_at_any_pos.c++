#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* link;
};

void print_nodes(struct node*head){
    struct node*ptr=head;
if (head==NULL)
{
    cout<<"Linked list is empty";
}
else{
    while (ptr!=NULL)
    {
        cout<<ptr->data;
        cout<<endl;
        ptr=ptr->link;
    }
    
}
}
void del_at_any_pos(struct node**head,int pos){
    struct node*current=*head;
    struct node*previous=*head;
 if(pos==1){
    struct node*ptr=*head;
    *head=current->link;
    current=NULL;
 }
 else{
    while (pos!=1)
    {
        previous=current;
        current=current->link;
        pos--;
    }
    previous->link=current->link;
    delete(current);
    current=NULL;
    
 }
}


int main(){

node*head=NULL;
node*first=NULL;
node*second=NULL;

    head=new node();
    first=new node();
    second=new node();
    
        head->data=2;
        head->link=first;

        first->data=4;
        first->link=second;

        second->data=6;
        second->link=NULL;

del_at_any_pos(&head,1);
print_nodes(head);
       
}