#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
}
void bubblesort(int *A, int n)
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(A[i]>A[i+1])
            {
                swap(A[i],A[i+1]);
            }
        }
    }
}
void savelist(int *p,int n)
{
    ofstream fout ("Bubble Sort Data.txt");  //Create a new file and store the sorted data to it
    for(int i=0; i<n; i++)
    {
        fout<<p[i]<<endl;
    }
}

int main()
{
    int n=20000;
    int *a= new int [n];
    ifstream fin("20k.txt");    //Read data from file
    for(int i=0; i<n; i++)
    {
        fin>>a[i];
    }
    // printlist(a,n);
    bubblesort(a,n);
    cout<<"......................."<<endl;
    printlist(a,n);
    savelist(a,n);

    return 0;
}
