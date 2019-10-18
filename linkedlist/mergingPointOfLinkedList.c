#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head1;
struct node *head2;

struct node *findMergingPoint(struct node *h1,struct node *h2)
{
	struct node *ptr1 = h1,*ptr2 = h2,*head3=NULL;
	while(ptr1!=NULL)
	{
		ptr2 = h2;
		while(ptr2!=NULL)
		{
			if(ptr1 == ptr2)
			{
				head3 = ptr2;
				return head3;
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	return head3;
}

int main()
{
	for(int i=1;i<7;i++)
	{
		struct node *ptr,*temp;
		ptr = (struct node*)malloc(sizeof(struct node));
		ptr->data = i;
		if(head1 == NULL)
		{
			ptr->next = NULL;
			head1 = ptr;
		}
		else
		{
			temp = head1;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
		}
	}

	for(int i=11;i<15;i++)
	{
		struct node *ptr,*temp;
		ptr = (struct node*)malloc(sizeof(struct node));
		ptr->data = i;
		if(head2 == NULL)
		{
			ptr->next = NULL;
			head2 = ptr;
		}
		else
		{
			temp = head2;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
		}
	}
	struct node *t = head2;
	while(t->next!=NULL)
		t = t->next;
	t->next = head1->next->next->next->next;

	t = findMergingPoint(head1,head2);

	while(t!=NULL)
	{
		printf("%d\n", t->data);
		t = t->next;
	}
}