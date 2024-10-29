#include<stdio.h>

int main() {

    int sum = 0;
    int n = 6;

    for(int i = 0; i <= n; i++) {
        sum = sum + i;
        // sum *= i;
    }

    printf("%d", sum);
    return 0;
}