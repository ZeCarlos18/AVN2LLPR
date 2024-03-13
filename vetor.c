#include <stdio.h>
int main(){
    int N,cont=0;
    printf("Indique quantos numeros voce ira digitar\n");
    scanf("%d",&N);
    int vetor[N];
    printf("Digite todos os numeors\n");
    for(int i=0;i<N;i++){
        scanf("%d",&vetor[N]);
    }
    for(int i=0;i<N;i++){
        if(vetor[i]%3==0){
        cont++;
        printf("Esse numero e multiplo de 3 = %d\n",vetor[N]);
        }
    }
    printf("O total de numeros multiplos de 3 sao = %d\n",cont);
    return 0;
}   