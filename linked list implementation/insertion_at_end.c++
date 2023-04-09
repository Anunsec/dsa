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

void insert_at_end(struct node*head,int data){
struct node*ptr=head;
struct node*temp=NULL;
temp=new node();
temp->data=data;
temp->link=NULL;
while (ptr->link!=NULL)
{
    ptr=ptr->link;
}
ptr->link=temp;

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

insert_at_end(head,10);
print_nodes(head);
       
}