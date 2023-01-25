#include<iostream>
using namespace std;


GCD(int n, int m)
{
    if(n==m)
    {
        return n;
    }
    else if(n>m)
    {
        return (n-m,m);
    }

    else
    {
        return (n,m-n);
    }
}
int main()
{
    cout<<GCD(49,7)<<endl;
    return 0;
}
