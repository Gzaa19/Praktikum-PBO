#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int N, i, j, c;

    printf("masukkan bilangan: ");
    scanf("%d", &N);

    for ( j = 2; j <= N; j++){
        c = 0;
       for(i=2; i<=(sqrt(j)); i++){
            if (j % i == 0){
                c = 1;
            }
        }
        if (c==0){
            printf("%d\n", j);
        } 
    }
    return 0;
}