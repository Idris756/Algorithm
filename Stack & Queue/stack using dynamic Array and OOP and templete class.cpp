#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Stack{
private:
    int n;
    int top;
    T *a;
public:

Stack(){
    n=3;
    top=-1;
    a=new T[n];
}

Stack(int n){
    this->n=n;
    top=-1;
    a=new T[n];
}

int isEmpty(){
    return top==-1?1:0;
}
int isFull(){
    return top>=n-1?1:0;
}

void push(T value){
    if(!isFull()) a[++top]=value;
    else cout<<"Full"<<endl;
}
void pop(){
    if(!isEmpty()) top--;
    else cout<<"Empty"<<endl;
}

T peak(){
    return a[top];
}

void display(){
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }

}

};


int main(){
   Stack<string> s(6);
    s.push("Richard");
    s.push("Aaron");
    s.push("Florence");
    s.push("Jonathan");
    s.display();

return 0;
}
