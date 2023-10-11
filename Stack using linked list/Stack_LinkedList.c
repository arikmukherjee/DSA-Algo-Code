#include<stdio.h>

#include<malloc.h>

struct node

  {

  	  int data;

  	  struct node *link;

  };

 struct node * top= NULL;  //Initially stack is empty

  void push()

   {

   	   struct node*temp;

   	   temp=(struct node *)malloc(sizeof(struct node));

   	   printf("Enter a value");

   	   scanf("%d",&temp->data);

   	   temp->link=top;

   	   top=temp;

	} 

   void pop()

    {

    	 if(top==NULL)

    	 {

    	 	printf("Stack underflow");

		 }

		 else

		 {

		 	 struct node*temp=top;

		 	 top=top->link;

		 	 printf("poped value=%d",temp->data);

		 	 free(temp);

		 }

	}

    void display()

	  {

	  	 struct node *temp=top;

	  	 if(top==NULL)

	  	 {

	  	 	printf("Empty stack");

		   }

		  else

		   {

 while(temp!=NULL)

		   	 {

		   	 	printf("%d",temp->data);

		   	 	temp=temp->link;

				}

			} 

	  }

	  

int main()

    {

    	 while(1)

    	 {

    	 	 printf("enter 1 for push\n");

    	 	 printf("enter 2 for pop\n");

    	 	 printf("enter 3 for display\n");

    	 	 printf("enter 4 for exit");

    	 	

int choice;

    	 	scanf("%d",&choice);

    	 	switch(choice)

    	 	 {

    	 	 	case 1:

    	 	 	push();

				 break;

				

				case 2:

				pop();

				break;

				

				case 3:

				display();

				break;

				

				case 4:

				printf("end of the program");

				break;

				default:

				 printf("wrong choice\n");  	

			  }

			  if (choice==4)

			  break;

		}

	}