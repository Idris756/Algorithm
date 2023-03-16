#include<bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int n;
    int front, rear;
    int *a;
public:

    Queue()
    {
        n=3;
        front = rear = -1;
        a=new int[n];
    }

    Queue(int n)
    {
        this->n=n;
        front = rear = -1;
        a=new int[n];
    }

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
    int frontVal()
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
};

int main()
{
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.display();

    return 0;
}
