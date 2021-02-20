#include <stdio.h>
#include <stdlib.h>


/* 
Exercício 1 
1)12 16
2)0 1 (uninitialized variable y)
3)A 65
  B 66 2 50
  b 98
4)100 200
5)128 -99
  129 -99
--------------------------------------------------------
Exercicio 2
1) a)3 5
   b)66
   c)... overflow
   d)_#_#_#_#_#_#_#_#_#_#
   e)abcdefg
     bcdefg
     cdefg
     defg
     efg
     fg
     g
   f)
     1
     10
     11
     100
     101
     110
     111
     1000
     1001
     1010
     1011
     1100
     1101
     1110
     1111
*/

// exercicio 3.1
void quadrado (int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            putchar('#');
        }
        putchar('\n');
    }

}

// exercicio 3.2
void xadrez (int n) {

    for (int i = 0; i < n; i++){

        for(int j= 0 ; j < n; j++){
            if ((i+j) % 2 == 0){
                putchar('#');
            }else{
                putchar('_');
            }
        }
        putchar('\n');
    }
}

// exercicio 3.3
void triangulo (int n ) {

    for (int i = 0; i < n ; i++){

        for (int j = 0 ; j < i + 1; j++){

            putchar('#');
        }
        putchar('\n');
    }

    for (int i = n - 1; i > 0; i--){

        for (int j = i; j > 0 ; j--){
            putchar('#');
        }
        putchar('\n');
    }
    
    printf("\n");

    for (int i = 1 ; i <= n; i++){

        for(int k = n - i; k > 0 ; k--){
            putchar(' ');
        }
            
            for (int j = 0; j < (i*2) - 1 ; j++){
                putchar('#');

            }
        putchar('\n');
    }
}

int main() {

    //Nomefunção(n);

    return 0;
}
