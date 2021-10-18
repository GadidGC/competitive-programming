#include<iostream>
using namespace std;
int main(){
	int T;
	cin >> T;
	for( int i=0 ; i< T;i++ ){
		int n, m;
		cin >> n >> m;
		cout << (n/3) * (m/3) << endl;
    }
    return 0;
}