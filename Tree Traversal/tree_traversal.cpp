#include<iostream>
using namespace std;
struct node
{
	struct node *l,*r;
	char data;
};
void preorder(struct node *root)
{
	if(root != NULL)
	{
		cout<<root->data<<" ";
		preorder(root->l);
		preorder(root->r);
	}
}
void inorder(struct node *root)
{
	if(root != NULL)
	{
		
		inorder(root->l);
		cout<<root->data<<" ";
		inorder(root->r);
	}
}
void postorder(struct node *root)
{
	if(root != NULL)
	{
		
		postorder(root->l);
		postorder(root->r);
		cout<<root->data<<" ";
	}
}
int main()
{
	struct node *root,*temp;
	root=new node;
	cout<<"Enter data of root :";
	cin>>root->data;
	root->l=NULL;
	root->r=NULL;
	
	temp=new node;
	cout<<"Enter data of temp :";
	cin>>temp->data;
	temp->l=NULL;
	temp->r=NULL;
	root->l=temp;
	
	temp=new node;
	cout<<"Enter data of temp :";
	cin>>temp->data;
	temp->l=NULL;
	temp->r=NULL;
	root->r=temp;

	temp=new node;
	cout<<"Enter data of temp :";
	cin>>temp->data;
	temp->l=NULL;
	temp->r=NULL;
	root->l->l=temp;
	
	temp=new node;
	cout<<"Enter data of temp :";
	cin>>temp->data;
	temp->l=NULL;
	temp->r=NULL;
	root->l->r=temp;
	
	temp=new node;
	cout<<"Enter data of temp :";
	cin>>temp->data;
	temp->l=NULL;
	temp->r=NULL;
	root->r->l=temp;
	
	temp=new node;
	cout<<"Enter data of temp :";
	cin>>temp->data;
	temp->l=NULL;
	temp->r=NULL;
	root->r->r=temp;
	
	cout<<endl<<"Preorder traversal"<<endl;
	preorder(root);
	cout<<endl<<"Inorder traversal"<<endl;
	inorder(root);
	cout<<endl<<"Postorder traversal"<<endl;
	postorder(root);
}

