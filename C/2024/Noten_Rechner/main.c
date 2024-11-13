#include <stdio.h>
#include "note.h"
int main(void)
{
int anzahl;
    float deinepunktzahl;
    float maxpunktanzahl;
    float resultat;
    double prozent;
    double allenoten;

    printf("Willkomen zu Notenberechner.\n");
    for (int i = 0; i < anzahl; i++) {
        printf("Gib die Anzahl der Prüfungen\n");
        scanf("%d",&anzahl);
        printf("Gib deine Erreichte Punktzahl an.\n");
        scanf("%f",&deinepunktzahl);
        printf("Gib die maximale Punktzahl an\n");
        scanf("%f", &maxpunktanzahl);
        resultat = punktzahl(deinepunktzahl,maxpunktanzahl);
        printf("Resultat: %.1f\n",resultat);
        prozent = deinepunktzahl / maxpunktanzahl * 100;
        printf("Prozent: %.1f\n",prozent);
        allenoten += resultat;

    }

    double durchschnitt = allenoten / anzahl;
    printf("Durchschnitt: %.1f\n",durchschnitt);

    return 0;
}
