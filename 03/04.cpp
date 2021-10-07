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
    int m,n;

    while(true){
        cin >> n >>m;
        if(n==0 and m==0){
            break;
        }
        DisjointSet ds(n);
        
        int inte;
        for(int i=0;i<m;i++){
            cin >> inte;
            int np;
            int bnp;
            for(int j=0;j<inte;j++){
                if(j != 0){
                    bnp = np;
                }
                cin >> np;
                if(j != 0){
                    ds.union_set(np,bnp); 
                }
            }
        }
        
        int cont=0;
        int comp = ds.parent[0];
        while(true){
            for(int i=0;i<ds.parent.size();i++){    
                if(comp == ds.parent[i]){
                    cont++;
                }
            }
            if (ds.parent[0] == ds.parent[ds.parent[0]]){
                break;
            }else{
                comp = ds.parent[ds.parent[0]];
            }
        }

        cout << cont <<endl;
    }

    return 0;
}