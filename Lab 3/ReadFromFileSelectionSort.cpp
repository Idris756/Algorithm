#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<" "<<p[i]<<endl;
    }
}

void selectionsort(int *A, int n)
{
    for(int i=0; i<n; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
            swap(A[min],A[i]);
        }
    }
}
void savelist(int *p,int n)
{
    ofstream fout ("Selection Sort Data.txt");  //Create a new file and store the sorted data to it
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
    selectionsort(a,n);
    cout<<"......................."<<endl;
    printlist(a,n);
    savelist(a,n);
    return 0;
}
