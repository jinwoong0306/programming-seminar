#include <stdio.h>
int main(){
    // 메모리 제한.
    int num[10001]={0,};
    int n;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        int a;
        scanf("%d", &a);
        num[a]++;
    }

    for(int i=0;i<=10000;i++){
        if(num[i]>0){
            for(int j=0; j<num[i];j++){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}