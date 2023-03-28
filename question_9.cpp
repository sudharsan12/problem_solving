#include<bits/stdc++.h>
using namespace std;

class Node
{
public :
    int data;
    Node *next;
};

int fun(Node *head,Node *prev,int k)
{
    if(head->data==-1)
    {
        return 0;
    }

    Node *next=head->next;

    int num=1+fun(next,head,k);

    if(k==num)
    {
        if(head==prev)
        {
            prev=head->next;
        }else
        {
            prev->next=next;
        }


    }

    return num;
}

void func(Node *head,int k)
{
    Node *h=head;
  //  fun(h,head,k);

  head=head->next;
}


int main()
{
    Node *head=NULL;

    int n,x;
    cin>>n>>x;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(head==NULL)
        {
            head=new Node;
            head->data=num;
            head->next=NULL;
        }else
        {
            Node *temp=head;

            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=new Node;

            temp->next->data=num;
            temp->next->next=NULL;
        }
    }

            Node *temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=new Node;

            temp->next->data=-1;
            temp->next->next=NULL;


      func(head,x);

    while(head!=NULL)
    {
     cout<<head->data<<endl;
    head=head->next;
    }

}
