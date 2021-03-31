#include <stdio.h>

int main(){
    int temp, used, unique = 0;
    int list[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    for(int i = 0; i < 10; i++){
        scanf("%d", &temp);
        used = 0;
        for(int j = 0; j < 10; j++){
            if(temp % 42 == list[j]){
                used = 1;
            }
        }
        if(used == 0){
            unique++;
        }

        list[i] = temp % 42;
    }

    printf("%d", unique);

    return 0;
}
