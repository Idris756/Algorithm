#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> vec)
{
    cout<<"Size of vector: "<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
}
int main()
{
// initialising the vector
//vector<int> v = { 10, 20, 30, 40 };
    vector<int> v;
    printVector(v);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    printVector(v);
    return 0;
}
