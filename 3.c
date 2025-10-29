#include <stdio.h>

int tempc, tempf;
char skala;
int main(){
    printf("Podaj w jakiej skali chcesz podac temperature(st. CELCJUSZ - C, Fahrenheita - F): \n");
    scanf("%c", &skala);
    if (skala == 'C'){
        printf("Podaj liczbe stopnii: \n");
        scanf("%d", &tempc);
        tempc=tempc*1.8+32;
        printf("Liczba stopnii w Fahrenheitach=%d \n", tempc);
    }
    else if (skala == 'F'){
        printf("Podaj liczbe stopnii: \n");
        scanf("%d", &tempf);
        tempf=tempf-32;
        tempf=tempf/1.8;
        printf("Liczba stopnii w Celcjuszach=%d \n", tempf);
    }
    else{
        printf("Zle wpisana skala\n");
    }
    return 0;
}