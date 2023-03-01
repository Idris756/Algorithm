#include<bits/stdc++.h>
using namespace std;
void printlist( int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<" = " <<p[i]<<endl;
    }
cout<<endl;
}

int partiton(int *a,int low,int high)
{
    int left,right,piovt_item;
    piovt_item =a[low];
    int piovt=left=low;
    right=high;
    while(left<right)
    {
        while(a[left]<=piovt_item)
        {
            left++;
        }

        while(a[right]>piovt_item)
        {
            right--;

        }
        if(left<right)
            {
            swap(a[left],a[right]);
            }
    }

    //swap(a)
   // a[low]=a[right];
   // a[right]=piovt_item;
   swap(a[low],a[right]);
    return right;

}

void quickSOrt(int *a,int low,int high)
{
    int pivot;
    if(high>low)
    {
        pivot = partiton(a,low,high);
        quickSOrt(a,low,pivot-1);
        quickSOrt(a,pivot+1,high);
    }
}

int main()
{
int n=10000;
int *a =new int[n];
ifstream fin("10k.txt");
for(int i=0;i<n;i++)
{
fin>>a[i];
}

cout<<"Enter number to generate = ";
int n1;
cin>>n1;

printlist(a,n1);
quickSOrt(a,0,n1-1);
cout<<"++++++++++++++++++++++++++++++++"<<endl;
printlist(a,n1);

}
