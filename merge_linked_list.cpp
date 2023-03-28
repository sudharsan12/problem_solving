#include<bits/stdc++.h>
using namespace std;
typedef struct List
{
	int val;
	struct List *next;
}l_list;


void fun_merge_list(l_list *head)
{

	l_list *first=head;
	l_list *iter=head->next;

	while(iter!=NULL)
	{

		if(iter->val!=0)
			first->val+=iter->val;
		else
		{
			if(iter->next==NULL)
				first->next=NULL;
			else
			{
			first->next=iter;
			first=iter;
			}
		}

		iter=iter->next;
	}

}



int main()
{
        l_list head;
	int n;
	cin>>n;
	head.val=0;
	head.next=NULL;
	l_list *second=&head;
	for(int i=0;i<n;i++)
	{
        l_list *temp=new l_list;
	cin>>temp->val;
	temp->next=NULL;
	second->next=temp;
	second=temp;
	}

	fun_merge_list(&head);
	second=&head;
	while(second!=0)
	{
		cout<<second->val<<endl;
		second=second->next;
	}

}
