#include <stdio.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node * llink;
	struct node * rlink;
	};

typedef struct node *NODE;
NODE head =NULL;

void createList(int val){
	NODE nd;
	if(head==NULL){
		nd=(NODE)malloc(sizeof(struct node));
		nd->llink=nd->rlink=NULL;
		nd->val=val;
		head = nd;

	}
	else{
		printf("List has already been created\n");
	}
}

void insertion(int before, int val){
	NODE nd,newnd;
	while(nd!=NULL){
		newnd=(NODE)malloc(sizeof(struct node));
		newnd->llink=newnd->rlink=NULL;
		newnd->val=val;
		if(nd->llink!=NULL){
		nd->llink->rlink=newnd;
		newnd->llink=nd->llink;
		newnd->rlink=nd;
		nd->llink=newnd;}

		else
		{
			newnd->rlink=nd;
			nd->llink=newnd;
			head=newnd;
			}
		}
		else
		printf("Unable to insert, node with value %d not found",val);
			
	}

void delete(int delval){
	NODE nd,nxtnd;
	nd=head;

	while(nd!=NULL){
		if(nd->val==delval){
			if (nd->llink!=NULL){
			nd->llink->rlink=nd->rlink;
			if (nd->rlink!=NULL)
			{
				nd->llink->rlink=nd->rlink;
				free(nd);
				nd=nxtnd;

				}
				else{
					nd->llink->rlink=NULL;
					free(nd);
					nd=NULL;
				}
			}
				else{if( nd->rlink!=NULL){
					nd->rlink->llink=NULL;
				head=nd->rlink;
				free (nd);
				nd=head;

				}
				else{
					free(nd);
					head=nd=NULL;
				}

			}
		}
else 
	nd=nd->rlink;
	}
}
void searchNode(int searchVal){
	NODE nd;
	nd=head;
	while(nd!=NULL){
		if(nd->val==searchVal)
			printf("Node is found with key %d\n",searchVal);
		nd=nd->rlink;
	}
}
void display(){
	NODE nd;
	while(nd!=NULL){
		printf("Node woth val %d\n,",nd->val);
		nd=nd->rlink;
	}
}

int main (){
	int choice,val,before;
	do{
		printf("1.create list\n");
		printf("2.insert into list\n");
		printf("3.delete all by value\n");
		printf("4.search by value\n");
		printf("5.display \n");
		printf("6.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				  printf("enter the value of the node");
				  scanf("%d",&val);
				  createList(val);
			break;
			case 2:
			printf("Enter the value tp ne inserted");
			scanf("%d",&val);
			break;
			case 3:printf("Enter the node to be deleted");
			scanf("%d",&val);
			break;
			case 4: printf("Enter the value to be searched");
					scanf("%d",&val);
			case 5:display(val);
			break;
			case 6:
			break;
			default:
			printf("invalid choice");
			break;






		}

	}while(choice !=6);
	return 0;
}