#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *p;
};
void deletebeg(struct node *head);
void traverse(struct node *head);
int main()
{
 struct node *head=(struct node *)malloc(sizeof(struct node));
 head->data=10;
 head->p=NULL;
struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=20;
current->p=NULL;
head->p=current;
current=(struct node*)malloc(sizeof(struct node));
current->data=30;
current->p=NULL;
head->p->p=current;
current=(struct node*)malloc(sizeof(struct node));
current->data=40;
current->p=NULL;
head->p->p->p=current;

printf("linked list before deletion\n");
traverse(head);
deletebeg(head);
printf("\nlinked list after the deletion\n");
traverse(head);
}
void deletebeg(struct node *head)
{
 struct node *temp=head;
 int position=1;
 if(head==NULL)
  printf("linked list is empty");
 else
{
 head=temp->p;
 free(temp); 
 temp=NULL;
 }
}
void traverse(struct node *head)
{
 struct node *temp=NULL;
 temp=head;
 while(temp!=NULL)
 {
 printf(" %d-->",temp->data);
 temp=temp->p;
 }
}


 

