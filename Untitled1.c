#include<stdio.h>

#define N 3

int main(){
    int mat[N][N];
    int i, j, somatv, somadc, somadp, somacdp, somabdp, somacdc, somabdc, somadd, somacbdp, somacbdc;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("Digite um valor para a matriz: \n");
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("% 5d", mat[i][j]);
        }
        printf("\n");
    }
    somatv = 0;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            somatv += mat[i][j];
        }
    }
    printf("Soma de todos os valores: %d\n", somatv);

    somadp = 0;

    for(i=0;i<N;i++){
        somadp += mat[i][i];
    }
    printf("Soma diagonal principal: %d\n", somadp);

    somadc = 0;

    for(i=0;i<N;i++){
        somadc += mat[i][N-i-1];
    }
    printf("Soma da diagonal contraria: %d\n", somadc);

    somacdp = 0;

    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            somacdp += mat[i][j];
        }
    }
    printf("Soma dos valores acima da diagonal principal: %d\n", somacdp);

    somabdp = 0;

    for(i=1;i<N;i++){
        for(j=i-1;j>=0;j--){
            somabdp += mat[i][j];
        }
    }
    printf("Soma dos valores abaixo da diagonal principal: %d\n", somabdp);

    somacdc = 0;

    for(i=0;i<N-1;i++){
        for(j=N-i-2;j>=0;j--){
            somacdc += mat[i][j];
        }
    }
    printf("Soma dos valores acima da diagonal contraria: %d\n", somacdc);

    somabdc = 0;

    for(i=1;i<N;i++){
        for(j=N-1; j>N-1-i;j--){
            somabdc += mat[i][j];
        }
    }
    printf("Soma dos valores abaixo da diagonal contraria: %d\n", somabdc);

    somadd = somadp + somadc;

    printf("Soma dos valores das duas diagonais: %d\n", somadd);

    somacbdp = somacdp + somabdp;

    printf("Soma dos valores acima e abaixo da diagonal principal: %d\n", somacbdp);

    somacbdc = somabdc + somacdc;

    printf("Soma dos valores acima e abaixo da diagonal contraria: %d\n", somacbdc);
}
