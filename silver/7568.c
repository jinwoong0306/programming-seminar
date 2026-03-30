#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x[50], y[50];
    for(int i=0;i<n;i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    for(int i=0;i<n;i++){
        int rank=1;
        for(int j=0;j<n;j++){
            if(x[i]<x[j]&&y[i]<y[j]){
                rank++;
            }
        }
        printf("%d ", rank);
    }
    return 0;
}