#include<iostream>
using namespace std;


int main() {
    int K;
    int N,M;
    int X,Y;
    while(true) {
        cin>>K;
        if(K==0){
            break;
        }
        cin>>N>>M;
        for(int i=0;i<K;i++){
            cin >> X>>Y;
            if(X == N or Y == M){
               cout<<"divisa\n";
            }
            else if(X  < N and Y < M){
                cout<<"SO\n";
            }
            else if(X > N and Y < M) {
                cout<<"SE\n";
            }
            else if(X > N and Y > M){
                cout<<"NE\n";
            }
            else if(X < N and Y > M ){
                cout<<"NO\n";
            }
                
        }
    }
    return 0;
}