#include<stdio.h>
int main(){
    int day=11;
    int hour=11;
    int minute=11;
    int d,h,m;
    scanf("%d %d %d",&d,&h,&m);

    printf("%d\n",((d-day)*24*60+(h-hour)*60+(m-minute)));
    return 0;
}