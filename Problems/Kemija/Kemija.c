#include <stdio.h>
#include <string.h>

int main(){
    char str[101];

    fgets(str, 101, stdin);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            i += 2;
        }
         printf("%c", str[i]);   
    }

    return 0;
}
