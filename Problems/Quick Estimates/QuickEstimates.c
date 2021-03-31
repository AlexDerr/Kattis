#include <stdio.h>
#include <string.h>

int main(){
    int n, len;
    char str[102];
    char c;

    scanf("%d", &n);
    scanf("%c", &c);

    for(int i = 0; i < n; i++){
        fgets(str, sizeof(str), stdin);
        len = strlen(str) - 1;
        printf("%d\n", len);
    }

    return 0;
}
