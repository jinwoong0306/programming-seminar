#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count=0;
    
    for(int i=1;i<=n;i++){
        int temp=i;
        while(temp>0&&temp%5==0){
            count++;
            temp/=5;
        }
    }

    printf("%d\n", count);
    return 0;
}