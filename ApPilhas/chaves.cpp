/*
RAFAEL DO NASCIMENTO PEDREIRA
EDUARDO OLIVEIRA FREIRE
LEVI SILVA FREITAS
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string text;
    while(getline(cin, text)){
        stack<char> s;
        bool flag = true;
        map<char, char> m;
        m ['}'] = '{';
        m [']'] = '['; 
        for(int i =0; i < text.size() && flag; i++){
            if(text[i] == '\\') i++;
            else if(text[i] == '[' || text[i] == '{') s.push(text[i]);
            else if(text[i] == ']' || text[i] == '}')
            {
                if(!s.empty() && m[text[i]] == s.top()) s.pop();
                else flag = false;
            }
        }
        if(flag && s.empty())
            cout << "SIM" << endl;
        else cout << "NAO" << endl;
    }
}