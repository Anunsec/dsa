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
        cout<<"ptr->data= "<<ptr->data;
        cout<<endl;
        ptr=ptr->link;
    }
    
}


}
struct node* reverse_ll(struct node* head){
     struct node*temp=NULL;
        struct node*temp2=NULL;
    while(head!=NULL){
       temp2=head->link;
       head->link=temp;
       temp=head;
       head=temp2;
    }
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

head=reverse_ll(head);
print_nodes(head);
       
}