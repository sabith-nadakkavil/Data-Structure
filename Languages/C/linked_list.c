#include<stdio.h>
#include<stdlib.h>
struct node{
	int element;
	struct node *next;
};
void display();
void add(int n);
void search(int n);
void deletion(int num);
void insert(int num,int position);
static struct node *current;
static struct node *head;
int main(){
    int choice,num,pos;
    do{
    printf("list operation to be performed:\n\t\t1.add\n\t\t2.insertion\n\t\t3.deletion\n\t\t4.traversal\n\t\t5.search\nyour choice : ");
    scanf("%d",&choice);
    switch(choice){
    	case 1:{
    		printf("\n\nenter the number to be added to list : ");
    		scanf("%d",&num);
    		add(num);
			break;
		}
		case 2:{
			printf("\n\nenter the element and position of insertion : ");
			scanf("%d%d",&num,&pos);
			insert(num,pos);
			break;
		}
		case 3:{
			printf("\n\nenter the number to be deleted : ");
			scanf("%d",&num);
			deletion(num);
			break;
		}
		case 4:{
			printf("\n\nthe list values are:\n");
			display();
			break;
		}
		case 5:{
			printf("\n\nenter the  num to be searched : ");
			scanf("%d",&num);
			search(num);
			break;
		default:
			printf("\n\nenter correct choice\n");
		}
	}
	printf("press 1 to continue  : ");
	scanf("%d",&choice);
}while(choice==1);
	return 0;
    
}
void add(int n){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	if(current!=NULL){
	current->next=temp;
	current=temp;
	current->element=n;
}
else{
head=temp;
current=head;
current->element=n;
}	
}
void display(){
	struct node *iter=head;
	struct node* temp;
	while(iter!=NULL){
		printf("%d\n",iter->element);
		iter = iter->next;
	}
}
void insert(int num,int position){
	struct node *temp;
	struct node *bu;
	struct node *iter=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->element=num;
	if(position==0){
		temp->next=head;
		head=temp;
		goto exi;
	}
	for(int i=0;i<position;i++){
		bu=iter;
		iter=iter->next;
	}
		bu->next=temp;
		temp->next=iter;
	exi:
	if(temp->next==NULL)
	current=temp;

}
void deletion(int num){
	struct node *iter=head,*bf;
	while(iter!=NULL){
		bf=iter;
		iter=iter->next;
		if(iter->element==num||bf->element==num){
			if(bf->element==num)
			head=iter;
			bf->next=iter->next;
			break;
		}
	}
}
void search(int n){
	struct node *iter=head;
	int index=0;
	while(iter!=NULL){
		if(iter->element==n){
		 printf("\n\n%d is presen in %d index\n\n",n,index);
		 break;
	}
	index++;
	iter=iter->next;
	}
	if(iter==NULL){
		printf("\nthe element is not found in list\n");
	}
}
