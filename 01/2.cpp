#include<iostream>
using namespace std;
int main(){
    int  t;
    cin >> t;
    long n;
    for( int i=0;i<t;i++){
        cin >> n ;
        n = (((((n*567)/9)+7492)*235)/47)-498;
        string temp = to_string(n);
        cout << temp[temp.length()-2] <<endl;
    }




    return 0;
}