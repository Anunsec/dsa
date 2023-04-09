#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* link;
};

void traverse_nodes(struct node*head){
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
struct node*del_at_beg(struct node*head){
struct node*temp=head;
head=head->link;
delete(temp);
temp=NULL;
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

        first->data=8;
        first->link=second;

        second->data=6;
        second->link=NULL;

head=del_at_beg(head);
traverse_nodes(head);
       
}
