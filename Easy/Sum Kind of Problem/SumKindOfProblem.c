#include <stdio.h>

int posFact(int x){
    int sum = 0;

    for(int i = 1; i <= x; i++){
        sum += i;
    }
    return sum;
}

int oddFact(int x){
    int i = 0, k = 1, sum = 0;

    while(i < x){
        if(k % 2 == 1){
            sum += k;
            k++;
            i++;
        }
        else{
            k++;
        }
    }

    return sum;
}

int evenFact(int x){
    int i = 0, k = 1, sum = 0;

    while(i < x){
        if(k % 2 == 0){
            sum += k;
            k++;
            i++;
        }
        else{
            k++;
        }
    }

    return sum;
}

int main(){
    int p, n, buf, temp;

    scanf("%d", &p);

    for(int i = 1; i <= p; i++){
        scanf("%d %d", &buf, &n);
        printf("%d ", i);

        temp = posFact(n);
        printf("%d ", temp);

        temp = oddFact(n);
        printf("%d ", temp);

        temp = evenFact(n);
        printf("%d\n", temp);
    }

    return 0;
}
