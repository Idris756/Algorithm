#include<bits/stdc++.h>
using namespace std;

int n;
int front = 0, rear = -1;
int *a;

int isEmpty(){
    return rear < front ? 1 : 0;
}
int isFull(){
    return rear >= n - 1 ? 1 : 0;
}

void enqueue(int value){
    if(!isFull()) a[++rear] = value;
    else cout<<"Full"<<endl;
}
void dequeue(){
    if(!isEmpty()) front++;
    else cout<<"Empty"<<endl;
}

int peak(){
    return a[front];
}

void display(){
    for(int i = front; i <= rear; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
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

