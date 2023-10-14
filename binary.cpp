#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node*left,*right;
};
node*create(int x)
{
  node*temp=new node();
  temp->data=x;
  temp->left=temp->right=NULL;
  return temp;
}
node*insert(node*bstroot,int x)
{
  if(bstroot==NULL)
  {
   bstroot= create(x);
   return bstroot;
  }
  else if(x  <=  bstroot->data)
  {
    bstroot->left=insert(bstroot->left,x);
  }
  else if(x>bstroot->data)
  {
    bstroot->right=insert(bstroot->right,x);
  }
      return bstroot;
}

bool search(int x,node*temp)
{
  if(temp->data==x)
  return true;
  else if(x <= temp->data )
    return search(x,temp->left);
  else //(x> temp->data)
    return search(x,temp->right);

// return false;
}
void print(node*root)
{
  node*temp=root;
  while(temp!=NULL)
  {cout<<temp->data<<" ";
  temp=temp->right;
  }

}
int find_min(node*root)
{
  node*curr=root;
  if(curr->right==NULL)
  return curr->data;
  else
  return find_min(curr->right);

}
int main()
{  int number;
   node*root=NULL;

   root=insert(root,15);
   root=insert(root,10);
   root=insert(root,20);
   root=insert(root,30);
   root=insert(root,40);
   root=insert(root,90);
   root=insert(root,0);
   root=insert(root,-1);
   root=insert(root,60);
  // cin>>number;
  // print(root);
   bool v;
  // cout<<endl;
  //  if(search(number,root)==true)
  //  {cout<<"found";}
  //  else
  //  {cout<<"not found";}
    cout<<find_min(root);

   return 0;
}




 /*  ---EXPLAINATION---
   (_ROOT_) -------25-----
        /             \
        15             50
      /    \          /   \
    10     22       35    70
    / \    /  \     /  \   / \
  4  12 18   12  31   44 66  90
*/







