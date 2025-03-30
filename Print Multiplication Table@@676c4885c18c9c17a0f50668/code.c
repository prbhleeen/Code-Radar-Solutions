#include<stdio.h>
int main(){
    int n, i, mul=1;
    scanf("%d", &n);
    for (i=1; i<=10; i++){
        mul = i*n;
        printf("%d x %d = %d\n", n, i, mul);
    }
}