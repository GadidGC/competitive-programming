#include <iostream>
#include <string.h>
#include <vector> 
#include <iterator>
using namespace std;

int main()
{
    string s;
    while( cin >> s){
        vector <char> result;
        int at = 0;
        for (int i = 0; i < s.length(); i++) {
            if(s[i] == '[')
                at = 0;
            else if(s[i] == ']')
                at = result.size();
            else{
                result.insert(result.begin()+at,s[i]);
                at++;
            }

        }  

        for(int i=0;i<result.size();i++){
            cout << result[i];
        }
        cout << '\n'; 
    }
	return 0;
}