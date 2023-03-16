#include<bits/stdc++.h>
using namespace std;

int n;
int front = -1, rear = -1;
int *a;

int isEmpty()
{

    return front == -1 && rear == -1?1:0;
}
int isFull()
{
    return rear >= n - 1 ? 1 : 0;
}

void enqueue(int value)
{
    if(isFull())
    {
        cout<<"Full"<<endl;
        return;
    }

    else if(isEmpty())
    {
        front=rear= 0;
        a[rear] = value;
    }
    else
    {
        a[++rear] = value;
    }
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

int peak()
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
    n = 3;
    a = new int[n];
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

