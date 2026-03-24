#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T); //테스트 횟수

    for(int i=0; i<T;i++){
        int h,w; //열 행 으로 
        scanf("%d %d", &h, &w);
        
        int apt[15][15]={0,};
        // 0층을 1호부터 14호까지 채워넣음.
        for(int j=1;j<=14;j++){
            apt[0][j]=j;
        }
        //1층부터 h 층까지 채워넣기.
        for(int floor=1;floor<=h;floor++){
            for(int room=1;room<=w;room++){
                apt[floor][room]=apt[floor-1][room]+apt[floor][room-1];
            }
        }
        printf("%d\n", apt[h][w]);
    }
    return 0;
}