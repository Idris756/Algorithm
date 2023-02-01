#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *a, int n)
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
        }
    }
}
void printList(int *p,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<" "<<p[i]<<" "<<endl;
    }
}
void generateData(int *p,int n)
{
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        p[i]=(rand()%1000)+1;
    }
}
int main()
{
    int n;
    cin>>n;
    int *p =new int [n];

    generateData(p,n);
    printList(p,n);
    cout<<"........."<<endl;
    bubbleSort(p,n);
    printList(p,n);

    return 0;

}

