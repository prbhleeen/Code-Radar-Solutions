#include <stdio.h>

int main(){
    char name[10], hobby[10];
    int age;
    scanf("%s %d %s", &name, &age, &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name, age, hobby);
}