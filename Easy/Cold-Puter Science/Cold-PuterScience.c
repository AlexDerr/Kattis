#include <stdio.h>

int main(){
    int n, temp, total = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(temp < 0){
            total++;
        }
    }
    
    printf("%d", total);
    
    return 0;
}
