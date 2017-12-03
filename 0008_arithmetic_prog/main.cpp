#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream f("input.txt",ios::in);
    int N,a,b,n;

    f>>N;

    while(N--) {
        f>>a>>b>>n;
        cout<<(a*n+b*n*(n-1)/2)<<' ';
    }

    cout<<endl;

    f.close();

    return 0;
}
