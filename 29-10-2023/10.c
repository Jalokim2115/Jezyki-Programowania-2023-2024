#include<stdio.h>


int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Podaj wszystkie dlugosci trójkata:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a + b > c && a + c > b && b + c > a){

        printf("Można z nich utworzyć trójkąt\n");
    }else printf("Nie da się z nich utworzyć trójkąta\n");
    return 0;
}