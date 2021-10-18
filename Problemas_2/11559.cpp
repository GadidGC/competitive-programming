#include <iostream>
using namespace std;

int main(){
    int N, B ,H ,W ,p ,a;

    while(cin >> N>> B>> H>>W){
        int cost,bed;
        cost = B ;
        bed = 0; 
        for(int i = 0; i < H;i++){
            cin>>p;
            for(int j = 0; j < W;j++){
                cin>>a;
                if(bed < a){
                    bed = a;
                }            
            }
            if(bed >= N and cost > N*p) {
                cost = N * p;
            }
        }
        if(cost >= B){
            cout<<"stay home"<<endl;
        }
        else{
            cout<<cost<<endl;
        }
    }

    return 0;
}