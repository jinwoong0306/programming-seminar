#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);  
    
    int prime_count=0;
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);

        int is_prime=1;
        
        if(num==1){
            continue;
        }
        for(int j=2;j*j<=num;j++){
            if(num%j==0){
                is_prime=0;
                break;
            }
        }

        if(is_prime==1){
            prime_count++;
        }
    }
    printf("%d", prime_count);
    return 0;
}