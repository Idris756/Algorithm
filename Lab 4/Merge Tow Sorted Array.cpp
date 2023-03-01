#include<bits/stdc++.h>
using namespace std;

void printLIst(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int *mergeSortedList(int *A, int n, int *B, int m)
{
    int *C=new int [m+n];
    int i=0,j=0,k=0;

    while(i<m&& j<n)
    {
        if(A[i]>B[j]) C[k++]=B[j++];
        else C[k++]=A[i++];

    }
    while(i<n)
    {
        C[k++]=A[i++];
    }
    while(j<m)
    {
        C[k++]=B[j++];
    }
    return C;
}

int main()
{
    int a[]= {2,5,7,8,10,16};
    int b[]= {6,9,20,32,50};
    printLIst(a,6);
    printLIst(b,5);

    int *m=mergeSortedList(a,6,b,5);
    printLIst(m,11);

    return 0;
}
