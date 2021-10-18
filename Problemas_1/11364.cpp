#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int n; 
        cin >> n;
        int x_i,min = 100,max = -1;
        for(int j=0;j<n;j++){
            cin >> x_i;             
            if(x_i < min ){
                min = x_i;
            }
            if(x_i > max){
                max = x_i;
            }
        }
        cout << (max - min)* 2<<endl;
    }


    return 0;
}