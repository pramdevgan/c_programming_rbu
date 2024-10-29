#include<stdio.h>

int main() {
    int fact = 1;
    int i;
    int n = 6;
    for(i = 1; i<= n; i++ ){
        fact = fact * i;
    }

    printf("fact of %d is %d", n, fact);

    return 0;
}
