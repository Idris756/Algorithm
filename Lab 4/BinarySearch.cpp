#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *a, int l,int h, int x)
{
        if (l >h){
            return -1;
        }
        int mid=(l+h)/2;

        if (x==A[mid]){
            return mid;
        }

        else if (x<A[mid]){
            return BinarySearch(int *a,int l,int [mid-1],x);
        }
        else {
            return BinarySearch(int *a,int [mid+1],x);
        }

}
int main()
{
    int n;
    cin>>n;
    int *p =new int [n];
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        p[i]=rand()%1000;
    }
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" "<<endl;
    }
    int index = linearSearch(p,n,100);
    if(index==-1)
    {
        cout<<"Not found"<<endl;
    }
    else cout<<"Found in "<<index<<endl;

    return 0;

}
