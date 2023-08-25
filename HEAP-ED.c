#include<stdio.h>
#include<stdlib.h>
#define tam 10
int m = 10;
int T[tam];
int n = 0;

void subir(int i){
    int j = i/2;
    if(j >= 1){
        if(T[i] > T[j]){
            int aux = T[i];
            T[i] = T[j];
            T[j] = aux;
            subir(j);
        }
    }
}

void inserir(int chave){
    if(n < m){
        T[n+1] = chave;
        n++;
    }
    subir(n);
}

int descer(i,n){
    int j,aux;
    j=2*i;
    if(j<=n){
        if (j<n){
            if( T[j+1] > T[j] ){
            j++;}
        }
    }if( T[i] < T[j] ){
        aux=T[j];
        T[i]=aux;
        descer(j,n);
    }
}

int remover(){
    if(n!=0){
        //agir[T[1]]
        T[1]=T[n];
        n--;
        descer(1,n);
    }
}

int main(){
    inserir(5);
    inserir(85);
    inserir(14);
    inserir(13);
    inserir(79);
    inserir(55);
    inserir(63);
    inserir(72);
    remover(14);
    remover(79);
    return 0;
}