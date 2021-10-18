#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;

    while(true){
        cin >> a >> b >> c >> d ;
        if(a == 0 and b == 0 and c == 0 and d==0){
            break;
        }

        int acum = 0;

        acum += 80;
        
        acum  += ((a - b)+ 40) % 40; 

        acum += 40;

        acum += ((c - b) +40) % 40;
        
        acum += ((c - d) +40) % 40;
        
        cout << (360/40)*(acum) << '\n';
    }
    return 0;
}