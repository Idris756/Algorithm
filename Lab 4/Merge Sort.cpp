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

void mergeList(int *A,int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int *L=new int[n1];
    int *R=new int[n2];
    for (int i=0; i<n1; i++)
    {
        L[i]=A[l+i];
    }
    for (int i=0; i<n2; i++)
    {

        R[i]=A[m+1+i];
    }
    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]>R[j]) A[k++]=R[j++];
        else A[k++]=L[i++];

    }
    while(i<n1)
    {
        A[k++]=L[i++];
    }
    while(j<n2)
    {
        A[k++]=R[j++];
    }


}

void mergesort(int *A,int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid+1,right);
        mergeList(A,left,mid,right);

    }

}

int main()
{

    int a[]= {89,2,45,6,2,1000,30};
    printLIst(a,7);
    mergesort(a,0,6);
    printLIst(a,7);

    return 0;
}
