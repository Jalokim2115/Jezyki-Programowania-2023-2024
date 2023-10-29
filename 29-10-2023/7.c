#include<stdio.h>


int main(){
    int dzien = 0;
    int miesiac = 0;
    int rok = 0;
    printf("Podaj dzien miesiac i rok\n");
    scanf("%d %d %d", &dzien, &miesiac, &rok);
    if(dzien > 31 || dzien < 0){
        printf("%d-%d-%d\n", dzien, miesiac, rok);
        printf("data jest niepoprawna\n");
    }else if(miesiac > 12 || miesiac < 0){
        printf("%d-%d-%d\n", dzien, miesiac, rok);
        printf("data jest niepoprawna\n");
    }else if(miesiac%2==0 && miesiac < 8 && dzien == 31){
        printf("%d-%d-%d\n", dzien, miesiac, rok);
        printf("data jest niepoprawna\n");
    }else if(miesiac%2==1 && miesiac > 7 && dzien == 31){
        printf("%d-%d-%d\n", dzien, miesiac, rok);
        printf("data jest niepoprawna\n");
    }else if((miesiac == 2 && rok % 4 != 0 && dzien > 28) || (miesiac == 2 && rok % 4 == 0 && dzien > 29) ){

    }
    
    return 0;
}