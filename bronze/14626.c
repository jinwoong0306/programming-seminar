#include <stdio.h>
int main(){
    char a[14];
    scanf("%s", a);
    int lost_num=0;
    int sum=0;
    for(int i=0;i<13;i++){
        if(a[i]=='*'){
            lost_num=i;
            continue;
        }
        if(i%2==0){
            sum+=a[i]-'0';
        }else{
            sum+=(a[i]-'0')*3;
        }
    }
    //sum이 10으로 나누어 떨어지는 수가 되도록 하는 숫자 찾기.
    for(int i=0;i<10;i++){
        if(lost_num%2==0){
            if((sum+i)%10==0){
                printf("%d", i);
                break;
            }
        }else{
            if((sum+i*3)%10==0){
                printf("%d", i);
                break;
            }
        }
    }
}