#include<stdio.h>
#include<ctype.h>

int main(){
    int przelacznik = 0;
    char c = 0;
    int d =0;
    do{
        printf("(1)Znak ASCII\n(2)Kod ASCII\nChcesz wprowadzić:");
        scanf("%d",&przelacznik);
        switch (przelacznik){
                case 1:
                    printf("Wprowadz znak ASCII:");
                    scanf(" %c", &c);
                    if(isalpha(c)){
                        printf("%c jest litera\n",c);
                    }else{
                        printf("%c nie jest literą\n", c);
                    }
                    break;
               case 2:
                    printf("Wprowadz kod ASCII:");
                    scanf( "%d", &d);
                    if(isalpha(c)){
                        printf("%d jest litera\n",d);
                    }else{
                        printf("%c nie jest literą\n", d);
                    }
                    break;
                 default:
                    przelacznik = 0;
                    break;
    }
    }while (przelacznik == 0);
    
    
    
}