#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *p;
};
void deleterand(struct node *head,int position);
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
 deleterand(head,3);
 traverse(head);
}

void deleterand(struct node *head,int position)
{
 struct node *new=(struct node *)malloc(sizeof(struct node));
 struct node *temp=head;
 if(head==NULL)
 printf("linked list is empty");
 else if(position==1)
{ 
  head=temp->p;
  free(temp); 
  temp=NULL;

}
  else
 { 
   while(position!=1)
   {
     temp=temp->p;
     position--;
    }
   new->P=temp->p;
   temp->p=new
   free(temp);
   temp=new; 

  }
   temp=NULL;
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
  printf("NULL\n")
}
