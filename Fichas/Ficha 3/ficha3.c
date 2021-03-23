#include <stdio.h>

//2

void swapM (int *x,int *y){

    int temp = *x;

    *x = *y;

    *y = temp;
}

//3

void swap (int v[], int i, int j){
    int temp = v[i];

    v[i] = v[j];

    v[j] = temp;
}

//4

int soma (int v[], int N){
    int i , total;

    for(i = 0; i < N ; i++){

        total += v[i];

    }

    return total;
}

//5.1

void comSwap(int v[], int N){
    int i = 0, j = N - 1;

        while (i < j ){

            swapM (&v[i] , &v[j]);

            i++;

            j--;
        }

}

//5.2

void inverteArray (int v[], int N){
    int i = 0, j = N - 1;

        while (i < j ){

            swap (v , i , j);

            i++;

            j--;
        }

}

//6

int maximum (int v[], int N, int *m){

    if (N <= 0){
        return 1;

        }else{
            int i;
            *m = v[0];

            for(i = 0; i < N - 1; i++){
               if(v[i] > *m){

                   *m = v[i];

                }

                return 0;
            }
        }

}

//7

void quadrados(int q[], int N){
    
    int i;
    
    for (i = 0; i < N; i++) {
        
        q[i] = (i + 1)*(i + 1);

    }
}

//8.1

void pascal (int v[], int N){
    int i , j;
    
    //As 5 primeiras linhas do triangulo de pascal sao na vdd 6 e por isso o N+1
    for(i = 0 ; i < N + 1; i++){
        v[i] = 1;
        
        for(j = 1 ; j < i ; j++){
            
            v[i - j] = v[i - j] + v[i - j - 1];

        }
    }
}

//8.2
void pascal2 (int v[], int N){
    int i , j;
    
    //As 5 primeiras linhas do triangulo de pascal sao na vdd 6 e por isso o N+1
    for(i = 0 ; i < N + 1; i++){
        v[i] = 1;
        
        for(j = 1 ; j < i ; j++){
            
            v[i - j] = v[i - j] + v[i - j - 1];

        }
        for(j=0 ; j <= i ; j++){

            printf("%d", v[j]);

        }

        putchar('\n');
    }
}

void main (){


}
