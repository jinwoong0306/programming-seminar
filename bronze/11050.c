#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k); 

    int facN = 1;  
    int facK = 1;  
    int facNK = 1; 

    for (int i = n; i > 0; i--) {
        facN *= i;
    }

    for (int i = k; i > 0; i--) {
        facK *= i;
    }

    for (int i = n - k; i > 0; i--) {
        facNK *= i;
    }
    printf("%d\n", facN / (facK * facNK));

    return 0;
}