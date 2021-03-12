#include <stdio.h>

//1
float multInt(int n, float m) {
    float r = 0;
    for(int i = 0; i < n; i++) r += m;
    return r;
}

//2

float multInt2 (int n, float m) {
    float r = 0;
    while(n > 0) {
        if(n % 2) r += m;
        n /= 2;
        m *= 2; 
    }
    return r;
}

//3
int mdc1 (int a , int b){
    int t , mdc, i;
    if (a < b){
        t = a;
        a = b;
        b = t;
    }

    for(i = 1 ; i <= b ; i++){
        if(a % i == 0 && b % i == 0){
            mdc = i;
        }
    }
    return i - 1;
}

//4
int mdc2 (int a, int b) {
    while(a != 0 && b != 0) {
        if (a > b) a = a - b;
        else if (b > a) b = b - a;
        else return a;
    }
    if(a == 0) return b;
    else return a;
}

//5

int mdc3 (int a, int b) {

    while(a != 0 && b != 0) {
        if (a > b) a = a % b;
        else if (b > a) b = b % a;
        else return a;
    }

    if(a == 0) return b;
    else return a;
}

//6
int fib1 (int n){

    if (n == 1 || n == 2) return 1;
    else return fib1(n-1) + fib1(n - 2);
}

//6.2
int fib2 (int n){

    int ultimo = 1, penultimo = 1, i,temp;
    for(i=3 ; i <= n ; i++){
        temp = ultimo;
        ultimo += penultimo;
        penultimo = temp;
    }
    return ultimo;
}

void main (){

printf("%d\n",fib2(4));

}
