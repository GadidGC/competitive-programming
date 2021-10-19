#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
	int n;
	while (true) {
        cin >> n;
        if(n == 0){
            break;
        }
		vector <int> A(n);
		for (int i = 0; i< n; i++){
            A[i]=i+1;
        } 
		vector<int> B(n);
		while (cin >> B[0]) {
            if(B[0] == 0){
                break;
            }
			for (int i = 1; i < n; i++){
                cin >> B[i];
            } 
			int Ai=0, Bi=0;
			stack<int> s;
			while (true) {
				if (!s.empty() && s.top() == B[Bi]) {
					s.pop(); Bi++;
					continue;
				}
				if (Ai >= n)break;
				s.push(A[Ai++]);
			}
			if (s.empty())cout << "Yes\n";
			else cout << "No\n";
		}
		cout << "\n";
	}
}