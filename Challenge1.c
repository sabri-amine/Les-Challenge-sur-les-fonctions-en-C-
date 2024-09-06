#include <stdio.h>

int main(){
    int N;

    printf("Entrer un Nombre :");
    scanf("%d",&N);

    for(int i=10;i>0;i--){
        printf("%d * %d = %d\n",N,i,N*i);
    }
    return 0;
}