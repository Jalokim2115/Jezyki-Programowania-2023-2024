#include<stdio.h>

int n;

void dodawanie(int tab[]){

for ( int i = 0; i < n; i++)
                        {
                            printf("%d\n",tab[i]);
                        }

}
int main(){
    int petla = 1;
    int tab[10] = {1,2,3,4,5,6,7,8};
 

    
    
    while (petla == 1)
    {   
        n = 0;
        for (int i = 0; i < 10; i++)
        {
            if (tab[i] == '\0'){}
            else{
                n++;
            
            }
        
        }
            printf("n jest rowne %d\n",n);
            printf("Wybierz jedną z opcji:\n");
            printf("0: Zamknij Program\n");
            printf("1: Wypisz tablice\n");
            printf("2: Sprawdź czy jest miejce w tablicy\n");
            printf("3: Usuń element z tablicy\n");
            printf("4: Sprwadź sume cyfr w tablicy\n");
            printf("5: Wypisz tablice w postaci drzewa binarnego\n");


        int wybor;
        scanf("%d",&wybor);
                switch (wybor)
                {
                case 0:
                    petla = 0;
                    break;
                case 1:
                    if (n == 0)
                    {
                        printf("n == 0\n");
                    } else{
                        for ( int i = 0; i < n; i++)
                        {
                            printf("%d\n",tab[i]);
                        }
                        
                    }
                    
                    
                case 2:
                    dodawanie(&tab[10]);
                    break;
                case 3:
                    /* code */
                    break;
                case 4:
                    /* code */
                    break;
                case 5:
                    /* code */
                    break;
                default:
                    break;
                }

        
    }
    
    return 0;
}