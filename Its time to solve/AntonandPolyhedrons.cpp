#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m{{"Tetrahedron",4},{"Cube",6},{"Icosahedron",20},{"Dodecahedron",12},{"Octahedron",8}};
    string s;
    int n,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        auto fnd=m.find(s);
        total=total+(fnd->second);
    }
    cout<<total;
}
