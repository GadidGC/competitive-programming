#include<iostream>
#include<set>
#include <sstream>

using namespace std;

int main( )
{
    set<string> dictionary;

    string temp, text;

    while(getline(cin, text)){
        for(int i = 0; i < text.length(); i++){
            if(text[i] >= 65 && text[i] <= 92)
                text[i] += 32;
            if(text[i] < 97 || text[i] > 122)
                text[i] = ' ';
        }

        stringstream temp (text);

        while(temp >> text){
            dictionary.insert(text);
        }
    }

    for(auto it = dictionary.begin(); it != dictionary.end(); it++)
            cout<<*it<<endl;
}