#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int b;
    int count = 0;
    for(int i=0;i<a;i++){
        scanf("%d", &b);
        if(b%2!=0){
            count ++;
        }
    }
    printf("%d", count);
    return 0;
}