/*
RAFAEL DO NASCIMENTO PEDREIRA
EDUARDO OLIVEIRA FREIRE
LEVI SILVA FREITAS
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m;
    m ['('] = 0;
    m ['+'] = 1;
    m ['-'] = 1;
    m ['*'] = 2;
    m ['/'] = 2;
    m ['^'] = 3; 

    string s;
    while(cin >> s)
    {
        stack <char> pilha;
        for(char elem: s)
        {
            // (
            if(elem == '(')
                pilha.push(elem);
            else if(elem == ')')
            {
                while(pilha.top() != '(')
                {
                    cout << pilha.top();
                    pilha.pop();
                }
                pilha.pop();
            }
            
            else if(m.count(elem) && !pilha.empty() )
            { 
                if(m.count(elem) && m[elem] >  m[pilha.top()] )
                    pilha.push(elem);
                else if(m.count(elem))
                {    while( !pilha.empty() && m[pilha.top()] >= m[elem] )
                    {
                        cout << pilha.top();
                        pilha.pop();
                    }
                    pilha.push(elem);
                }
            }
            
            else if(m.count(elem))
                pilha.push(elem);
            else
                cout << elem;                
               
        }
        while(!pilha.empty())
        {
            cout << pilha.top();
            pilha.pop();
        }
        cout << "\n";
    }


}