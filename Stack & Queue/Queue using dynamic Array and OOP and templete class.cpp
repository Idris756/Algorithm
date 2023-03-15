#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Queue{
private:
    int n;
    int front, rear;
    T *a;
public:

Queue(){
    n=3;
    front = rear = -1;
    a=new T[n];
}

Queue(int n){
    this->n=n;
    front = rear = -1;
    a=new T[n];
}

int isEmpty(){
    return front == -1 ? 1 : 0;
}
int isFull(){
    return ((rear + 1) % n) == front ? 1 : 0;
}

void enqueue(T value){
    if(!isFull()) {
        if(front == -1) front = 0;
        rear = (rear + 1) % n;
        a[rear] = value;
    }
    else cout<<"Full"<<endl;
}

void dequeue(){
    if(!isEmpty()) {
        if(front == rear) front = rear = -1;
        else front = (front + 1) % n;
    }
    else cout<<"Empty"<<endl;
}

T frontElement(){
    return a[front];
}

void display(){
    if(!isEmpty()) {
        for(int i=front;i<=rear;i=(i+1)%n){
            cout<<a[i]<<" ";
        }
    }
    else cout<<"Empty"<<endl;

}

};


int main(){
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
