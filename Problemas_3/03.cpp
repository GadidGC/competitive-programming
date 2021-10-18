#include<iostream>
#include<stack>
using namespace std;
int main(){

    int t;
    cin >>  t;
    for(int i=0;i<t; i++){
        stack<char> p;
        string s;
        cin >>s;
        for(int j=0;j<s.length();j++){
            if(s[i] == '(' or s[i]== '['){
                p.push(s[i]);
            }else if (s[i]== ')'){
                if(p.top() == '('){
                    p.pop();
                }
            }else if(s[i] == ']'){
                if(p.top() == '['){
                    p.pop();
                }
            }
        }
    }


    return 0;
}