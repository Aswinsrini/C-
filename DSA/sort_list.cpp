// You are using GCC
#include<iostream>
using namespace std;
struct node
{
  int data;
  node*next;
}*head=NULL;
void insert(int x)
{
    node*temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    if(head->data > temp->data)//insert_front
    {  
        if(head!=NULL)
        temp->next=head;
        head=temp;
        
    }
    else if(head->data < temp->data)//insert_last
    {
        
        node*temp2=head;
        while(temp2->next!=NULL)
        {
            if(temp2->data<temp->data && temp2->next->data > temp->data)
            {   
              temp->next=temp2->next;
              temp2->next=temp;
              
            }
            temp2=temp2->next;
        } 
    }
    
}
void print()
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int num;
    for(int i=0;i<5;i++)
    {
        cin>>num;
        insert(num);
    }
    print();
}

