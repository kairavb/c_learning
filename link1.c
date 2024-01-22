// stack using linked list
#include<stdio.h>
#include<stdlib.h>

// node struct
typedef struct
{
	int data;
	void *next;
}node;

node *head = NULL;

// menu
void menu()
{
	printf("\t1 to append element\n");
	printf("\t2 to delete element\n");
	printf("\t3 to print linked list\n");
	printf("\t4 to exit\n");
	printf("\tenter: ");
	return;
}

// print linked list
void see(node *p)
{
	while(p != NULL)
	{
		printf("%d --> ", p->data);
		p = p->next;
	}
	printf("\n");
	return;
}

// append element
int push()
{
	int data;
	printf("\tenter data: ");
	scanf("%d", &data);
	printf("\n");

	// two cases, head is null or head is not null
	if (head == NULL)
	{
		node *new = malloc(sizeof(node));
		head = new;
		head->data = data;
		head->next = NULL;
	}else
	{
		node *new = malloc(sizeof(node));
		new->next = head;
		head = new;
		head->data = data;
	}
	see(head);
	return data;
}

// delete element
void pop()
{
	if (head != NULL)
	{
		node *current = head->next;
		free(head);
		head = current;
	}
	see(head);
	return;
}

// main function
int main()
{
	int choice = -1;
	while (choice != 4)
	{
		menu();
		int num_received = scanf("%d", &choice);
		printf("\n");
		if (num_received == 1 && choice > 0 && choice <= 4)
		{
			switch(choice)
			{
				case 1:
					push();
					break;
				case 2:
					pop();
					break;
				case 3:
					see(head);
					break;
				case 4:
					break;
			}
		}
	}
	while(head != NULL)
	{
		node *current = head->next;
		free(head);
		head = current;
	}
	return 0;
}
