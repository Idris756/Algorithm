#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Queue
{
private:
    int n;
    int front, rear;
    T *a;
public:

    Queue()
    {
        n=3;
        front = rear = -1;
        a=new T[n];
    }

    Queue(int n)
    {
        this->n=n;
        front = rear = -1;
        a=new T[n];
    }

    int isEmpty()
    {
        return front == -1 && rear == -1?1:0;
    }
    int isFull()
    {
        return rear >= n - 1 ? 1 : 0;
    }

    void enqueue(T value)
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

    T frontElement()
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
    Queue<string> q(6);
    q.enqueue("Richard");
    q.enqueue("Aaron");
    q.enqueue("Florence");
    q.enqueue("Jonathan");
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}
