#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int n;
    int front, rear;
    int *a;
public:

    Queue(){
        n=3;
        front = rear = -1;
        a=new int[n];
    }

    Queue(int n){
        this->n=n;
        front = rear = -1;
        a=new int[n];
    }

    int isEmpty(){
        return front==-1?1:0;
    }

    int isFull(){
        return (rear+1)%n == front ? 1 : 0;
    }

    void push(int value){
        if(!isFull()){
            rear = (rear+1)%n;
            a[rear] = value;
            if(front==-1) front = rear;
        }
        else cout<<"Full"<<endl;
    }

    void pop(){
        if(!isEmpty()){
            if(front==rear) front = rear = -1;
            else front = (front+1)%n;
        }
        else cout<<"Empty"<<endl;
    }

    int frontVal(){
        return a[front];
    }

    void display(){
        if(!isEmpty()){
            int i = front;
            while(i!=rear){
                cout<<a[i]<<" ";
                i = (i+1)%n;
            }
            cout<<a[i]<<endl;
        }
    }

};

int main(){
    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.display();

    q.push(50);
    q.push(60);
    q.push(70);
    q.display();

    return 0;
}
