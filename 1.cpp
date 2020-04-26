#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node *next;
    
}*first;
void create(int a[],int n)
{
   int i=0;
    Node *last,*t;
    first=new Node();
    first->data=a[i];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new Node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(Node *p)
{
   while(p!=0)
   {
    cout<<p->data<<" ";
     p=p->next;
}
    
}

int main()
{
    int arr[5]={3,4,5,6,7};
    create(arr,5);
    display(first);
    return 0;
}