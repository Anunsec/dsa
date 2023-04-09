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
void insert_at_any_pos(struct node*head,int pos,int data){
struct node*ptr=head;
struct node*ptr2=NULL;
ptr2=new node();
ptr2->data=data;
ptr2->link=NULL;
while(pos!=2){
ptr=ptr->link;
pos--;
}
ptr2->link=ptr->link;
ptr->link=ptr2;
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

        first->data=8;
        first->link=second;

        second->data=6;
        second->link=NULL;

insert_at_any_pos(head,3,5);
print_nodes(head);
       
}
