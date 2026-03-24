#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
 
    int match_O = min(m, k);
    
    int match_X = min(n - m, n - k);
    
    printf("%d\n", match_O + match_X);
    
    return 0;
}