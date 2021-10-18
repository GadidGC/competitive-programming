#include<iostream>
#include <algorithm>
#include <math.h>


using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        string piece;
        cin >>piece;
        
        float m,n ;
        cin >> m >> n;

        if (piece == "r"){
            cout << min(m,n) <<endl;
        }else if(piece == "k"){
            cout << ceil(m/2) * ceil(n/2) + (floor(m/2)*floor(n/2))<<endl;
        }else if(piece == "Q"){
            cout << min(m,n)<<endl;
        }else if(piece == "K"){
            cout << ceil(m/2) * ceil(n/2)<<endl;

        }
        
    }
    return 0;
}