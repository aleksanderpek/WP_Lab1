#include <stdio.h>
#include <stdbool.h>

int main() {
    double rok, wzrost, prawko;


    printf("Podaj rok urodzenia: \n");
    scanf("%d" rok);
    printf("Podaj wzrost: \n");
    scanf("%d" wzrost);
    printf("Czy masz prawo jazdy(1-tak, 0-nie): \n");
    scanf("%d" prawko);
    if(prawko = 1){
        printf("Jestem urodzony w %d , mam %d wzrostu i mam prawo jazdy");
    }
   else if(prawko = 0){
        printf("Jestem urodzony w %d , mam %d wzrostu i nie mam prawa jazdy");
    }
    else{
        printf("zle wpisany znak w prawie jazdy");
    }
    return 0;
}
