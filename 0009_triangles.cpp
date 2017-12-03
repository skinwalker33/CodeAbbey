#include <iostream>
#include <vector>

using namespace std;

/* input

21
779 241 325
1841 758 474
474 927 730
427 218 795
749 425 1266
400 342 779
752 1387 798
938 874 1226
2795 1194 972
848 1645 662
628 171 267
142 257 468
1016 2198 724
443 555 463
538 945 837
1948 780 785
314 676 215
232 249 552
986 797 573
966 297 500
2189 531 978
*/

struct Tri {
    int a,b,c;
};

int main() {
    int n,a,b,c;
    cin>>n;

    vector<Tri> tris;

    while(n--) {
        Tri t;
        cin>>t.a>>t.b>>t.c;
        tris.push_back(t);
    }

    for(auto t : tris) {
        a=t.a; b=t.b; c=t.c;
        cout<<(((a+b)>c && (b+c)>a && (c+a)>b)?'1':'0')<<' ';
    }

    cout<<endl;

    return 0;
}
