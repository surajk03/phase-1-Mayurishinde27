#Inserting the nodes in beginning , middle and at the end.

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	
};

int print(struct node* run)
{

	while(run!=NULL)
	{
		printf(" %d ",run->data);
		run=run->next;
	}

}


int main()
{
    struct node* head;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=10;
    temp->next=NULL;
   
    struct node* temp1;
    temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=11;
    temp1->next=NULL;
    temp->next=temp1;
    
    struct node* temp2;
    temp2=(struct node*)malloc(sizeof(struct node));
    temp2->data=12;
    temp2->next=NULL;
   
    struct node* temp3;
    temp3=(struct node*)malloc(sizeof(struct node));
    temp3->data=13;
    temp3->next=NULL;
    temp2->next=temp3;
    
    struct node* begin;
    begin=(struct node*)malloc(sizeof(struct node));
    begin->data= 5;
    begin->next=NULL;
    begin->next=temp;
    head=begin;
    
    struct node* mid;
    mid=(struct node*)malloc(sizeof(struct node));
    mid->data= 6;
    mid->next=NULL;
    mid->next=temp2;
    
    struct node* end;
    end =(struct node*)malloc(sizeof(struct node));
    end->data=7;
    end->next=NULL;
    temp3->next=end;
    
    temp1->next=mid;
    
    print(head);
 
 return 0;	
}

#OUTPUT:

 5  10  11  6  12  13  7
