#include <stdio.h>
#include <math.h>  


float somma(float a, float b);
float sottrazione(float a, float b);
float moltiplicazione(float a, float b);
float divisione(float a, float b);
float potenza(float a, float b);
float radice(float a);

int caricaMenu();

int main() {
    int scelta;
    float a, b, risultato;

    do {
        scelta = caricaMenu();

        switch(scelta) {
            case 1:  
                printf("Inserisci il primo numero: ");
                scanf("%f", &a);
                printf("Inserisci il secondo numero: ");
                scanf("%f", &b);
                risultato = somma(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;

            case 2:  
                printf("Inserisci il primo numero: ");
                scanf("%f", &a);
                printf("Inserisci il secondo numero: ");
                scanf("%f", &b);
                risultato = sottrazione(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;

            case 3:  
                printf("Inserisci il primo numero: ");
                scanf("%f", &a);
                printf("Inserisci il secondo numero: ");
                scanf("%f", &b);
                risultato = moltiplicazione(a, b);
                printf("Risultato: %.2f\n", risultato);
                break;

            case 4:  
                printf("Inserisci il primo numero: ");
                scanf("%f", &a);
                printf("Inserisci il secondo numero: ");
                scanf("%f", &b);
                if(b != 0) {
                    risultato = divisione(a, b);
                    printf("Risultato: %.2f\n", risultato);
                } else {
                    printf("Errore: non puoi dividere per zero!\n");
                }
                break;

            case 5:  
                printf("Inserisci la base: ");
                scanf("%f", &a);
                printf("Inserisci l'esponente: ");
                scanf("%f", &b);
                risultato = potenza(a, b);
                printf("%.2f ^ %.2f = %.2f\n", a, b, risultato);
                break;

            case 6:  
                printf("Inserisci il numero: ");
                scanf("%f", &a);
                if(a >= 0) {
                    risultato = radice(a);
                    printf("Radice quadrata di %.2f = %.2f\n", a, risultato);
                } else {
                    printf("Errore: non si può calcolare la radice quadrata di un numero negativo!\n");
                }
                break;

            case 0:  
                printf("Uscita dal programma.\n");
                break;

            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 0);

    return 0;
}


float somma(float a, float b) { 
    return a + b; 
}

float sottrazione(float a, float b) { 
    return a - b; 
}

float moltiplicazione(float a, float b) { 
    return a * b; 
}

float divisione(float a, float b) { 
    return a / b; 
}

float potenza(float a, float b) { 
    return pow(a, b); 
}

float radice(float a) { 
    return sqrt(a); 
}

int caricaMenu() {
    int scelta;
    printf("\n=== Calcolatrice ===\n");
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("5. Potenza\n");
    printf("6. Radice quadrata\n");
    printf("0. Esci\n");
    printf("Scegli un'opzione: ");
    scanf("%d", &scelta);
    
    return scelta;
}