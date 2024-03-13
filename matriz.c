#include <stdio.h>
int main(){
    int venda[5][4],cont=0;
    for(int i=0;i<5;i++){
        for(int e=0;e<4;e++){
            printf("Vendedor %d\n",i+1);
            printf("Diga as vendas na semana %d:",e+1);
            scanf("%d",&venda[i][e]);
        }
    }
    for(int i=0;i<5;i++){
        cont=0;
        for(int e=0;e<4;e++){
            cont=cont+venda[i][e];
        }
        printf("As vendas totais do vendedor %d foram: %d\n",i+1,cont);
    }
    return 0;
}