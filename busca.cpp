#include <bits/stdc++.h>

using namespace std;

int busca_sequencial (int *V, int num, int tam){
    int i=0;
    while (i < tam){
        if(V[i] == num) return i+1;
        i++;
    }
    return 0;
}

int main(){
    int tamanho, numero, buscas, result;

    while(cin >> tamanho){
    if(!tamanho) break;

    int vetor[tamanho];

    for(int i=0; i < tamanho; i++) cin >> vetor[i];

    cin >> buscas;

    while(buscas){
        cin >> numero;
        result = busca_sequencial (vetor, numero, tamanho);
        if(result){
            cout << result << endl;
        }
        else cout << "NAO" << endl;
        buscas--;
    }
    cout << endl;
    }
}
