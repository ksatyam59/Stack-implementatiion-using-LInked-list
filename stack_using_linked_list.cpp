#include<iostream>
#include<list>


using namespace std;


struct LList
{
    int data;
    LList *next;
};

LList *head=NULL;

void Insert_Stack(LList **head,int x)
{
    LList *newnode=new LList;
    if(!newnode)
    {
        cout<<"Memory Error";
    }

    newnode->data=x;
    newnode->next=NULL;

    if(*head==NULL)
    {
        *head=newnode;
    }

    else
        newnode->next=*head;
    *head=newnode;
}

void pop(LList **head)
{

    if(*head==NULL)
    {
        cout<<"No element in Stack"<<endl;
    }

    else

    *head=(*head)->next;


}


void Show_Stack(LList *head)
{
    LList *temp;
    temp=head;

    if(temp==NULL)
    {
        cout<<"No element in the stack to display"<<endl;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

  cout<<endl;
}

int main()
{
    LList *head=NULL;

   Insert_Stack(&head,5);
    Insert_Stack(&head,3);
    Insert_Stack(&head,9);
    Insert_Stack(&head,0);
    Show_Stack(head);
    pop(&head);
    Show_Stack(head);
    pop(&head);
    Show_Stack(head);

    return 0;

    }
