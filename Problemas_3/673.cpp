#include<iostream>
#include<stack>
#include <string>

using namespace std;
int main(){

    int t;
    cin >>  t;
    string dum;
    getline(cin,dum);
    for(int i=0;i<t; i++){
        stack<char> p;
        string s;
        bool pass=true ;
        getline(cin , s);
        for(int j=0;j<s.length();j++){

            if(s[j] == '(' or s[j]== '['){
                p.push(s[j]);
            }else if (s[j]== ')'){
                if(p.empty()){
                    pass=false;
                    break;
                }
                if(p.top() == '('){
                    p.pop();
                }
                else{
                    pass=false;
                    break;
                }
            }else if(s[j] == ']'){
                if(p.empty()){
                    pass=false;
                    break;
                }
                if(p.top() == '['){
                    p.pop();
                }else{
                    pass=false;
                    break;
                }
            }
        }
        
        if(!p.empty() or pass== false){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }


    return 0;
}