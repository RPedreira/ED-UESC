#include <bits/stdc++.h>

using namespace std;

void select_sort (int *V, int tam){
    int index = 0, menor, index_menor, loops=tam-1, aux;

    while(loops){
        menor = V[index];
        index_menor = index;
        for(int i=index+1; i < tam; i++){
            if(V[i] < menor){
                menor = V[i];
                index_menor = i;
            }
        }

        aux = V[index];
        V[index] = V[index_menor];
        V[index_menor] = aux;

        cout << index_menor+1 << ' ';

        loops--;
        index ++;
    }
}

int main(){
    int tamanho;

    while(cin >> tamanho){
        if(!tamanho) break;
        int vetor[tamanho];

        for(int i=0; i < tamanho; i++) cin >> vetor[i];

        select_sort(vetor, tamanho);
        cout << endl;
        for(int i=0; i < tamanho; i++) cout << vetor[i] << ' ';
        cout << endl;
    }
}
