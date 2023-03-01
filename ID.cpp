/*#include<bits/stdc++.h>
using namespace std;
int main(){
int middleId = 46787;
cout<<(middleId%3+1)<<endl;
return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));

    ofstream fout_100k("100K.txt");
    for (int i = 0; i < 100000; ++i) {
        fout_100k<< rand() % 100000 + 1 << endl;
    }
   // fout_100k.close();

    ofstream fout_1000k("1000K.txt");
    for (int i = 0; i < 1000000; ++i) {
        fout_1000k<< rand() % 1000000 + 1 << endl;
    }
    //fout_1000k.close();

    return 0;
}

