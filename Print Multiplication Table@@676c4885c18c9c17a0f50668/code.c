#include<stdio.h>
int main(){
    int n, i, mul=1;
    for (i=1; i<=10; i++){
        mul = i*n;
        printf("%d x %d = %d", n, i, mul);
    }
}