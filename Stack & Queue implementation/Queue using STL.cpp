#include <iostream>
#include <Queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(8);
    q.push(10);
    q.push(12);
    q.push(14);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
