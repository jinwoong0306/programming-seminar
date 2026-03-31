#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}n2;

int compare(const void*a, const void*b){
    n2*temp1=(n2*)a;
    n2*temp2=(n2*)b;
    if (temp1->x != temp2->x) {
        return temp1->x - temp2->x;
    }
    // 2. x좌표가 같으면 y좌표 기준 오름차순
    return temp1->y - temp2->y;
}

int main(){
    int n;
    if(scanf("%d", &n)!=1){
        return 0;
    }

    n2*list=(n2*)malloc(sizeof(n2)*n);

    for(int i=0;i<n;i++){
        scanf("%d %d", &list[i].x, &list[i].y);
    }

    qsort(list, n, sizeof(n2), compare);

    for(int i=0;i<n;i++){
        printf("%d %d\n", list[i].x, list[i].y);
    }

    free(list);
    return 0;
}