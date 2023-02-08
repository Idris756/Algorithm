#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
}
void insertionsort(int *A, int n)
{
    for(int j=1; j<n; j++)
    {
        int value=A[j];
        int i=j-1;
        while(i>=0 & A[i]>value)
        {
            swap(A[i],A[i+1]);
            i=i-1;
        }
        A[i+1]=value;
    }
}
void savelist(int *p,int n)
{
    ofstream fout ("Insertion Sort Data.txt");  //Create a new file and store the sorted data to it
    for(int i=0; i<n; i++)
    {
        fout<<p[i]<<endl;
    }
}

int main()
{
    int n=1000;
    int *a= new int [n];
    ifstream fin("1k.txt");   //Read data from file
    for(int i=0; i<n; i++)
    {
        fin>>a[i];
    }
    //printlist(a,n);
    insertionsort(a,n);
    cout<<"......................."<<endl;
    printlist(a,n);
    savelist(a,n);
    return 0;
}
