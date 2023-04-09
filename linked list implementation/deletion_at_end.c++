// using double pointer;
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
void del_at_end(struct node*head){
    if(head==NULL){
        cout<<"L.L is empty";
    }
    if (head->link==NULL)
    {
        delete(head);
        head=NULL;
    }
    else
    {
        struct node*temp2=head;
        struct node*temp=head;
        while (temp->link!=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        delete(temp);
        temp=NULL;

    }
    /*void del_at_end(struct node*head){
    if(head==NULL){
        cout<<"L.L is empty";
    }
    if (head->link==NULL)
    {
        delete(head);
        head=NULL;
    }
    else
    {
        struct node*temp=head;
        while(temp->link->link!=NULL){
            temp=temp->link;
            delete(temp->link);
            temp->link=NULL;
        }
        }*/

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

del_at_end(head);
print_nodes(head);
       
}