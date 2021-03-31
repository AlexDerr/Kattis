#include <stdio.h>

int main(){
    char adr[3] = { 'A', 'B', 'C' };
    char bru[4] = { 'B', 'A', 'B', 'C' };
    char gor[6] = { 'C', 'C', 'A', 'A', 'B', 'B' };
    char ans[100];
    char buf;
    int len, max = 0, adrCount = 0, bruCount = 0, gorCount = 0;


    scanf("%d", &len);
    scanf("%c", &buf);
    scanf("%s", ans);

    for(int i = 0; i < len; i++){
        if(adr[i % 3] == ans[i]){
            adrCount++;
            if(adrCount > max){
                max = adrCount;
            }
        }
        if(bru[i % 4] == ans[i]){
            bruCount++;
            if(bruCount > max){
                max = bruCount;
            }

        }
        if(gor[i % 6] == ans[i]){
            gorCount++;
            if(gorCount > max){
                max = gorCount;
            }

        }
    }

    printf("%d\n", max);
    if(adrCount == max){
        printf("Adrian\n");
    }
    if(bruCount == max){
        printf("Bruno\n");
    }
    if(gorCount == max){
        printf("Goran");
    }

    return 0;
}
