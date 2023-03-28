#include<bits/stdc++.h>
using namespace std;


typedef struct Node
{
    int val;
    struct Node *next;
}node;



void swappairnode(node *head)
{

    if(head==NULL)
        return NULL;

        if(head->next==NULL)
        return head;

        node *temp=head;
        head=head->next;
        temp->next=head->next;
        head->next=temp;


        while(temp!=NULL && temp->next!=NULL)
        {

            node *test=temp->next;

            if(test->next==NULL)
                return;

            temp->next=test->next;
            test->next=test->next->next;

        }


}


int main()
{

    node *head=new node;

    vector<int>num={1,2,3,4,5};
    node *temp=head,*prev;
    for(int i=0;i<num.size();i++)
    {
        prev=temp;
        temp->val=num[i];
        temp->next=new node;
        temp=temp->next;
    }
    prev->next=NULL;

    swappairnode(head);

    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }



}
