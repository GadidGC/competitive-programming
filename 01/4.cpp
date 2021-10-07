#include<iostream>
using namespace std;
int main(){

    int n ;
    cin >> n ;
    string test;
    long suma ;
    long ite;
    for(int i=0; i<n;i++){
        cin >> test;
        suma = 0;
        ite = 0;
        for(int j=0;j<test.length();j++){
            if(test[j] == 'X'){
                ite = 0;
            }else{
                ite +=1 ;
            }
            suma+=ite;
        }
        cout<<suma<<endl;
    }



    return 0;
}