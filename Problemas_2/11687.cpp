#include<iostream>
using namespace std;

int main(){

    string x_i,x_1;
    while(true){
        cin >> x_i;
        if(x_i == "END"){
            break;
        }
        int acum = 1;
        while(true){

            long x_1 = x_i.length();

            if(to_string(x_1) == x_i){
                break;
            }
            acum++;
            x_i = to_string(x_1);
        }

        cout<<acum<<"\n";
    }

return 0;
} 