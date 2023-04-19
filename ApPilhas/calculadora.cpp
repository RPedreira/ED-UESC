/*
RAFAEL DO NASCIMENTO PEDREIRA
EDUARDO OLIVEIRA FREIRE
LEVI SILVA FREITAS
*/

#include <bits/stdc++.h>
using namespace std;

double operation (string a, stack<double> &pilha){
    double A, B;
    A = pilha.top();    pilha.pop();
    B = pilha.top();    pilha.pop();
    if(a == "+") return B + A;
    else if (a == "-") return B - A;
    else if (a == "*") return B * A;
    else if (a == "/") return B / A;
    else return pow(B, A);
}

int main(){
    int N;
    string operadores = "+-/*^";
    while(cin >> N && N)
    {
        stack <double> pilha;
        string s;
        double aux;
        while(N--)
        {
            cin >> s;
            if(operadores.find(s) != string:: npos) pilha.push(operation(s, pilha));
            else pilha.push(stod(s));
        }
        printf("%.3lf\n", pilha.top());
    }
}