#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
int main()
{
    cout<<Fibonacci(4)<<endl;
    return 0;
}
