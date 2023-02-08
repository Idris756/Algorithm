#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout("1k.txt");  //Create a new file and store random number to it
    srand(time(0));
    int n=1000;
    for(int i=0; i<n; i++)
    {
        fout<<rand()%1000+1<<endl;    //random number under 1000  //to avoid 0 add +1
        cout<<rand()%1000+1<<endl;
    }
    return 0;
}
