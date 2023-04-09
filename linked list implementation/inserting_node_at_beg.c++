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
struct node* insert_at_beg(struct node*head,int data){
struct node*temp=NULL;
temp=new node();
temp->data=data;
temp->link=NULL;
temp->link=head;
head=temp;
return head;
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

head=insert_at_beg(head,8);
print_nodes(head);
       
}