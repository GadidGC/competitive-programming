#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int c, n;
    long long money;
    while (true){
        cin >> c;
        if(c == 0){
            break;
        }
        long long sum=0;
        multiset<long long> cost;
        for (int i = 0; i != c; i++){
            cin >> n;
            for(int j=0;j<n;j++){
                cin >> money;
                cost.insert(money);
            }
            //TIME LIMIT EXEDED sort(bills.begin(),bills.end());

            sum += *(--cost.end()) - *(cost.begin());
            cost.erase(--cost.end());
            cost.erase(cost.begin());
        }
        cout << sum << endl;
    }
    return 0;
} 