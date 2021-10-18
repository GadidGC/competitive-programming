#include <iostream>
#include<string>
using namespace std;

int main(){
    string text;
    bool cnt = false;
    while(getline(cin,text)){
        for(int i=0;i<text.length();i++){
            if(text[i]== '"' and cnt == false){
                text.erase(i,1);
                text.insert(i,"``");
                cnt = true;
            }
            else if(text[i]== '"' and cnt == true){
                text.erase(i,1);
                text.insert(i,"''");
                cnt = false;
            }
        }
        cout << text << '\n';
    }

    return 0;
}