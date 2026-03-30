#include <stdio.h>
int num[2000001];

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int temp=0;
        scanf("%d", &temp);
        num[temp+1000000]=1;
    }

    for(int i=0;i<2000001;i++){
        if(num[i]==1){
            printf("%d\n", i-1000000);
        }
    }

    return 0;
}

