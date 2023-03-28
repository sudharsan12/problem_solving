
#include<bits/stdc++.h>
using namespace std;


typedef struct Node
{
    int val;
    struct Node *next;
}node;



node* fun(node *head,int n)
{

      static int num=0;

    if(head==NULL)
        return NULL;
    head->next=fun(head->next,n);
    num++;

    if(num==n)
    {
        return head->next;
    }else
       return head;


}


node *removeNthnode(node *head,int n)
{

    if(head==NULL)
        return NULL;
    node *root=head;



    return fun(head,n);;

}




int main()
{

    node *head=new node;

    vector<int>num={1,2};
    node *temp=head,*prev;
    for(int i=0;i<num.size();i++)
    {
        prev=temp;
        temp->val=num[i];
        temp->next=new node;
        temp=temp->next;
    }
    prev->next=NULL;

    node *root=removeNthnode(head,1);
    while(root!=NULL)
    {
        cout<<root->val<<" ";
        root=root->next;
    }



}
