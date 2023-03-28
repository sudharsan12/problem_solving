#include<bits/stdc++.h>
using namespace std;


typedef struct Node
{
    int val;
    struct Node *next;
}node;


node* reverseKnode(node *head,int k)
{


if(head==NULL||k==1)
    return head;

    int cnt=0;
    node *curr=head;

    while(curr!=NULL)
    {
        cnt++;
        curr=curr->next;
    }

    node *dummy=new node,*frnt=head,*bck;
    dummy->next=head;
    curr=dummy;


   while(cnt>=k)
    {
      for(int i=1;i<k;i++)
        {

         bck=curr->next;
         curr->next=frnt->next;
         frnt->next=frnt->next->next;
         curr->next->next=bck;
        }
        curr=frnt;
        frnt=frnt->next;
        cnt-=k;
    }

        return dummy->next;
}


int main()
{

    node *head=new node;

    vector<int>num={1,2,3};
    node *temp=head,*prev;
    for(int i=0;i<num.size();i++)
    {
        prev=temp;
        temp->val=num[i];
        temp->next=new node;
        temp=temp->next;
    }
    prev->next=NULL;

    node*res=reverseKnode(head,3);


    while(res!=NULL)
    {
        cout<<res->val<<" ";
        res=res->next;
    }
}
