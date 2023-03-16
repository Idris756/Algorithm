#include<bits/stdc++.h>
using namespace std;

# define n 3

int a[n];
int front = -1, rear = -1;

int isEmpty()
{
    return front == -1 && rear == -1?1:0;
}

int isFull()
{
    return rear == n - 1?1:0;
}

void enqueue(int value)
{
    if(isFull())
    {
        cout<<"Full"<<endl;
        return;
    }

    if(isEmpty())
    {
        front = 0;
    }

    a[++rear] = value;
}

void dequeue()
{
    if(isEmpty())
    {
        cout<<"Empty"<<endl;
        return;
    }

    if((front!=-1)&&(front == rear))
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

int frontValue()
{
    return a[front];
}

void display()
{
    if(isEmpty())
    {
        cout<<"Empty"<<endl;
        return;
    }

    for(int i = front; i <= rear; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}

