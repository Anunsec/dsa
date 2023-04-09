#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*link; 
};

struct node*delete_entire_ll(struct node*head){
struct node*temp=head;
while(temp!=NULL){
    temp=temp->link;
    delete(temp);
    head=temp;
}
return head;
}
void print_nodes(struct node*head){
    struct node*ptr=head;
if (head==NULL)
{
    cout<<"Linked list is empty";
}
else{
    while (ptr!=NULL)
    {
        cout<<"ptr->data= "<<ptr->data;
        cout<<endl;
        ptr=ptr->link;
    }
    
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

head=delete_entire_ll(head);
print_nodes(head);
       
}