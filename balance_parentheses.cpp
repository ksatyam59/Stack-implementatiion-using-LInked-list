#include<iostream>
#include<stack>
#include<stdio.h>

using namespace std;

stack <char> S;

int main()
{
    char Str[100];
    cout<<"enter String"<<endl;
    gets(Str);
    int n=sizeof(Str)/sizeof(Str[0]);

    for(int i=0;i<n;i++)
    {
        if(Str[i]=='(')
        {
        S.push(Str[i]);

        }
        else if(Str[i]==')')

            S.pop();
    }

    if(S.empty())
    {
        cout<<"Balance";
    }
    else
    cout<<"Not Balance";


    return 0;

}
