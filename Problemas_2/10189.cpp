#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    string ite; 
    int nTest=1;
    while(true){
        cin>>n>>m;
        if(n==0 and m==0){
            break;
        }
       vector<vector<int>> square(n);
        for ( int i = 0 ; i < n ; i++ ){
            square[i].resize(m);
        }

        for(int i=0;i<n;i++){
            cin>>ite;
            for(int j=0;j<m;j++){
                if(ite[j] == '*'){

                    square[i][j] = -300;
                    
                    if(i-1 >= 0){
                        square[i-1][j] +=1;
                        if(j-1 >= 0){
                            square[i-1][j-1] +=1;
                        }
                        if(j+1 < m){
                            square[i-1][j+1]+=1;
                        }
                    }
                    
                    if(j-1 >= 0){
                        square[i][j-1]+=1;
                    }

                    if(j+1 < m){
                        square[i][j+1]+=1;
                    }
                    
                    if (i+1 < n){
                        square[i+1][j]+=1;
                        if(j-1 >= 0){
                            square[i+1][j-1]+=1;
                        }
                        if(j+1 < m){
                            square[i+1][j+1]+=1;
                        }                        
                    }

       
                }
            }
        }
        if(nTest!=1){
            cout << endl;
        }
        cout << "Field #" <<nTest<<":\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(square[i][j] < 0){
                    cout << '*';
                } else {
                    cout << square[i][j];
                }  
            }
            cout << "\n";
        }

        nTest++;
    }


    return 0;
}