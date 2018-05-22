#include <stdio.h>
#include <stdlib.h>

int main(){

    int eingabe;
    int bitwert = 128;
    int bitzaehler = 8;
    int i = 0;

    printf("Bitte geben Sie eine Zahl zwischen 1 und 255 ein\n");
    scanf("%i", &eingabe);

    while (eingabe>0){
        if(eingabe/bitwert==1){
            printf("Bit gesetzt: %i. Stelle\n", bitzaehler);
        }
        eingabe=eingabe%bitwert;
        bitwert = bitwert/2;
        bitzaehler = bitzaehler-1;
    }
	return 0;
}
