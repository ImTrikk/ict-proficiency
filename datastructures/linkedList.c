#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
 int data;
 struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
 struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
 newNode->data = data;
 newNode->next = NULL;
 return newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
 struct Node *temp = head;
 while (temp != NULL)
 {
  printf("%d -> ", temp->data);
  temp = temp->next;
 }
 printf("NULL\n");
}

int main()
{
 struct Node *head = createNode(1); // Creating the first node
 head->next = createNode(2);        // Adding the second node
 head->next->next = createNode(3);  // Adding the third node

 // Printing the linked list
 printList(head);

 return 0;
}
