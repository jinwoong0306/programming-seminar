#include <stdio.h>
int main(){
    int problems[] = {0, 12, 11, 11, 10, 9, 9, 9, 8, 8, 8, 7};
    int penalty[] = {0, 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 1234, 1052};
    int a;
    scanf("%d", &a);
    printf("%d %d",problems[a], penalty[a]);
    return 0;
}