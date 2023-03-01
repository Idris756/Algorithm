#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout("10k.txt");
    srand(time(0));
    int n=10000;
    for(int i=0;i<n;i++)
    {
        fout<<rand()<<endl;
    }
    return 0;
}
