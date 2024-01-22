#include <stdio.h>

int main() {
    int k, temp = 0, back = 0, next = 1;
    scanf("%d", &k);
    printf("0");
    for  (int i=0; i<k; i++){
        temp = next;
        next = back + next;
        printf(" %d", next);
        back = temp;
    }
    return 0;
}