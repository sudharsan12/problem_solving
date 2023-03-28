#include<bits/stdc++.h>
using namespace std;

   class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };


void fun(Node *newNode,Node *head1,Node *head2,int carry)
{

    if(head1->data==-1 && head2->data==-1)
        return;
     newNode->next=new Node(-1);

    int num1=0,num2=0,res=0;

    if(head1->data!=-1)
        num1=head1->data;
    if(head2->data!=-1)
        num2=head2->data;

    res=num1+num2+carry;

    if(res>9)
    {
    newNode->data=(res%10);
        carry=1;
    }else
    {
        newNode->data=res;
        carry=0;
    }


    if(head1->next!=NULL && head2->next!=NULL)
    {
    fun(newNode->next,head1->next,head2->next,carry);
    }//else
    if(head1->next==NULL && head2->next!=NULL)
    {
        fun(newNode->next,head1,head2->next,carry);
    }//else
     if(head1->next!=NULL && head2->next==NULL)
    {
        fun(newNode->next,head1->next,head2,carry);
    }


}



Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *newHead=new Node(-1);
    fun(newHead,head1,head2,0);
    return newHead;
}



int main()
{


  Node *node1=new Node(-1);
  Node *node2=new Node(-1);

  int num;
  Node *temp=node1,*prev;


  do
  {
  cin>>num;
     prev=temp;
    temp->data=num;
    temp->next=new Node(-1);
    temp=temp->next;
  }while(num!=-1);


  temp=node2;
  do
  {
  cin>>num;

    temp->data=num;
    temp->next=new Node(-1);
    temp=temp->next;
  }while(num!=-1);


 //   Node *res=addTwoNumbers(node1, node2);


while(node1!=NULL)
{
    cout<<node1->data<<" ";
    node1=node1->next;
}


/*
while(res!=NULL)
{
    cout<<res->data<<" ";
    res=res->next;
}
*/
}
