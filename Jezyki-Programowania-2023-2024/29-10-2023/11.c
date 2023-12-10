#include<stdio.h>
#include<math.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Podaj wszystkie dlugosci trójkata:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a^2 + b^2 == c^2 && a^2 + c^2 == b^2 && b^2 == c^2 > a^2){

        printf("Można z nich utworzyć trójkąt prostokątny\n");
    }else printf("Nie da się z nich utworzyć trójkąta prostokątnego\n");
    return 0;
}