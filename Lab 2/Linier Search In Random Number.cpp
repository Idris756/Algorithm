#include<bits/stdc++.h>
using namespace std;
int linearSearch(int *a, int n, int item)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==item)
            return i;
    }
    return -1;
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
        cout<<i<<" "<<p[i]<<" "<<endl;
    }
    int index = linearSearch(p,n,100);
    if(index==-1)
    {
        cout<<"Not found"<<endl;
    }
    else cout<<"Found in "<<index<<endl;

    return 0;

}
