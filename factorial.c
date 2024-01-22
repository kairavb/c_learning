#include <stdio.h>
int fact(int num);


int main(){
    int k;
    scanf("%d", &k);
    printf("\n%d",fact(k));
    return 0;
 }

int fact(int num){
    if (num == 1) return 1;
    return num * fact(num-1);
 }