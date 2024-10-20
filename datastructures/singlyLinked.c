#include <stdio.h>
#include <stdlib.h>

struct node
{
 int data;
 struct node *next;
};

void print_node_data(struct node *l1)
{
 struct node *ptr = NULL;
 ptr = l1;
 while (ptr != NULL)
 {
  printf("%d ", ptr->data);
  // traverse
  ptr = ptr->next;
 }
}

void insertNode(struct node *l1, int data)
{
 struct node *ptr, *temp;
 ptr = l1;
 temp = (struct node *)malloc(sizeof(struct node));

 temp->data = data;
 temp->next = NULL;

 while (ptr->next != NULL)
 {
  ptr = ptr->next;
 }

 ptr->next = temp;
}

int main()
{
 struct node *l1 = NULL;
 l1 = (struct node *)malloc(sizeof(struct node));

 l1->data = 45;
 l1->next = NULL;

 struct node *l2 = NULL;
 l2 = (struct node *)malloc(sizeof(struct node));
 l2->data = 100;
 l2->next = NULL;

 // update to connect nodes
 l1->next = l2;

 print_node_data(l1);
 insertNode(l1, 50);

 printf("After insertion: \n");
 print_node_data(l1);
}
