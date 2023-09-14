#include <stdio.h>

int main() {
    int a, b, sum, prod;
    printf("veuillez entrez deux entiers ");
    scanf("%d%d", &a, &b);
    if(a != b){
        sum= a+b;
        printf("la somme des nombres est :%d ", sum);
    }else{
   prod=(a+b)*3;
    printf("le triple des nombres est :%d ", prod) ;
    }
    return 0;
