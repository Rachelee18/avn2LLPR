#include <stdio.h>

int main (){
    int v[10];
    int N;
    v[0]= 1;
    v[1]= 2;
    v[2]= 3;
    v[3]= 4;
    v[4]= 5;
    v[5]= 6;
    v[6]= 7;
    v[7]= 8;
    v[8]= 9;
    v[9]= 10;
    
    printf("Digite um valor que irei somar com qualquer numero: ");
    scanf("%d\n", &N);
    for(int i = 0; i < N; i++){
        int s = (N + v[i])/3;
        printf("%d\n", s);
        if (s == 3){
            printf("é multiplo de 3");
        } else{
            printf("não é multiplo de 3");
        }
        
    }

    return 0;

}