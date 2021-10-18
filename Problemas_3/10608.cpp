#include <iostream>
#include <vector>
using namespace std;

struct DisjointSet {
    vector<int> parent;
    vector<int> size;

    DisjointSet(int maxSize) {
        parent.resize(maxSize);
        size.resize(maxSize);
        for (int i = 0; i < maxSize; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};


int main(){
    int t;
    cin >> t ;

    for(int i=0;i< t;i++){
        int m,n;
        cin >>n >>m ;
        DisjointSet s(n+1);
        for (int j=0;j<m;j++){
            int a,b;
            cin >> a>>b;
            s.union_set(a,b);
        }
        int max = s.size[0];
        for(int j=1;j<n;j++){
            if(max < s.size[j]){
                max = s.size[j];
            }
        }
        cout << max <<endl;
    } 

    return 0;
}