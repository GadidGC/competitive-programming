#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    long sum = 0;
    while(true){
        cin >> n;
        if(n == "0"){
            break;
        }
        while (1 != n.length()){
            sum = 0;
            for(int i= 0 ;i<n.length(); i++){
                sum +=(n[i] - '0');
            }
            n = to_string(sum);
        }   
        cout << n << endl; 
    }



    return 0;
}