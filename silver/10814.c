#include <stdio.h>
#include <stdlib.h>

int age_count[201]={0,};

typedef struct{
    char name[101];
    int age;
}Members;

int main(){
    int n;
    scanf("%d", &n);
    Members*list=(Members*)malloc(sizeof(Members)*n);
    
    for(int i=0;i<n;i++){
        scanf("%d %s", &list[i].age, list[i].name);
        age_count[list[i].age]++;
    }

    for(int i=0;i<200;i++){
        if(age_count[i]==0){
            continue;
        }
        for(int j=0;j<n;j++){
            if(list[j].age==i){
                printf("%d %s\n", list[j].age, list[j].name);
            }
        }
    }

    free(list);
    return 0;
}