#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void removeLoop(struct node *slow,struct node *head);

void detectLoop(struct node *head)
{
	struct node *slow = head;
	struct node *fast = head;
	while(slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
		{
			removeLoop(slow,head);
			break;
		}
	}
}

void removeLoop(struct node *slow,struct node *head)
{
	struct node *ptr1 = head,*ptr2;
	while(1)
	{
		ptr2 = slow;
		while(ptr2->next != slow && ptr2->next != ptr1)
			ptr2 = ptr2->next;

		if(ptr2->next == ptr1)
			break;

		ptr1 = ptr1->next;
	}
	ptr2->next = NULL;
}

int main()
{
	for(int i=1;i<6;i++)
	{
		struct node *ptr,*temp;
		ptr = (struct node*)malloc(sizeof(struct node));
		ptr->data = i;
		if(head == NULL)
		{
			ptr->next = NULL;
			head = ptr;
		}
		else
		{
			temp = head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
		}
	}
	head->next->next->next->next = head->next;
	detectLoop(head);

	struct node *t = head;
	while(t!=NULL)
	{
		printf("%d\n", t->data);
		t = t->next;
	}
}