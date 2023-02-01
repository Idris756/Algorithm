#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int column;
    cin>>row>>column;

    int **m=new int* [row];
    for(int i=0; i<row; i++)
    {
        m[i]=new int[column];

    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            m[i][j]=10;
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
