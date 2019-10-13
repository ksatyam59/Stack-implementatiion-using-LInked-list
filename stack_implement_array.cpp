#include<iostream>
#define MAXSIZE 10

using namespace std;

struct ArrayStack
{
     int top;
     int capacity;
     int *Array;
};

ArrayStack *CreateStack()
{
    ArrayStack *S;
    S=new(ArrayStack);

    if(!S)
        return NULL;
    S->capacity=MAXSIZE;
    S->top=-1;
    S->Array=new(S->capacity)int[S->capacity];

    if(!S->Array)
        return NULL;

    return S;
}

int isEmpty(ArrayStack *S)
{
    if(S->top==-1)
        return 1;
    else
        return 0;
}

int isFull(ArrayStack *S)
{
    if(S->top==S->capacity-1)
        return 1;
    else
        return 0;
}

void Push(ArrayStack *S, int data)
{
    if(isFull(S)==1)
    {
        cout<<"Stack is Full";
    }

    else
        S->Array[++S->top]=data;
}

int Pop(ArrayStack *S)
{
    if(isEmpty(S)==1)
    {
        cout<<"stack underflow";
    }

    else
    return(S->Array[S->top--]);
}
 void ShowStack(ArrayStack *S)
 {
     for(int i=0;i<=S->top;i++)
     cout<<S->Array[i]<<" ";


 }

 int main()
 {
     ArrayStack *S;

      S=CreateStack();

      Push(S,5);
      Push(S,5);
      Push(S,5);
      Push(S,6);
      ShowStack(S);

      return 0;
 }
