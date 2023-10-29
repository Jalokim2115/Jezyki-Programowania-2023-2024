#include<stdio.h>


int main(){
    int rok = 0;
    printf("Podaj rok:");
    scanf("%d",&rok);
    if(rok % 4 == 0){
        printf("\nRok %d jest przestępny\n", rok);

    }else {
        printf("\nRok %d nie jest przestępny\n", rok);
    };
    return 0;
}