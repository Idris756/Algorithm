#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//stdlib.h --> rand()
//srabd()   //seeds

int main()
{
    srand(time(0));
    for(int i=0; i<500; i++)  //500 random number
    {
        cout<<rand()%1000<<endl;  //random number under 1000  //to avoid 0 add +1
    }
    return 0;
}
