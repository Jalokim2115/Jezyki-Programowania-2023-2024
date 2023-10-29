#include<stdio.h>


int main(){
    int pierwsza_liczba = 0;
    int druga_liczba = 0;
    int wynik = 0;
    printf("Podaj pierwsza liczbe:");
    scanf("%d", &pierwsza_liczba);
    printf("\nPodaj druga liczbe:");
    scanf("%d", &druga_liczba);
    wynik = pierwsza_liczba + druga_liczba;
    printf("\nWynik dodawania:%d", wynik);
    wynik = pierwsza_liczba - druga_liczba;
    printf("\nWynik odejmowania:%d", wynik);
    wynik = pierwsza_liczba * druga_liczba;
    printf("\nWynik mnożenia:%d", wynik);
    wynik = pierwsza_liczba / druga_liczba;
    printf("\nWynik dzielenia:%d", wynik);
    wynik = pierwsza_liczba % druga_liczba;
    printf("\nReszta z dzielenia:%d\n", wynik);
    return 0;
}