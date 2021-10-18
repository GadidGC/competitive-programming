#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    int N;
    float n;
    for(int i=0;i<T;i++){
        cin >> N;
        int resul1 =0;
        int resul2 =0 ;
        for(int j=0;j<N;j++){
            cin>>n;
            if(fmod(n,10)==0){
                n+=0.1;
            }
            float div1 = n/30;
            resul1 += ceil(div1)* 10;
            
            float div2 = n/60;

            resul2 += ceil(div2)* 15;
        }
        cout << "Case " <<i+1<<": ";
        if(resul1 ==  resul2){
            cout << "Mile Juice "<< resul1<<endl;
        }  
        else if (resul1 < resul2){
            cout << "Mile "<<resul1 << endl;
        }else{
            cout << "Juice "<<resul2<<endl;

        }
    }



    return 0 ;
}