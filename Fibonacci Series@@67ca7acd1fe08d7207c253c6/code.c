#include<stdio.h>


int fibonacciSeries(int n){
    for (int i=0; i<n; i++){
        if (n==0) return 0;
        if (n==1) return 1;
    return fib(n-1) + fib(n-2);
    }
}