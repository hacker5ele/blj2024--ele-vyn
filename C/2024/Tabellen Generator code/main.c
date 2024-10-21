#include <stdio.h>
#include <string.h>

int main() {
    int rows, cols;
    char cellContent[100];  // Puffer für die Benutzereingabe für den Zellinhalt
    FILE *file;

    // Datei öffnen (zum Schreiben)
    file = fopen("index.html", "w");

    // Benutzereingabe für Zeilen und Spalten
    printf("Wie viele Reihen soll die Tabelle haben? ");
    scanf("%d", &rows);
    printf("Wie viele Spalten soll die Tabelle haben? ");
    scanf("%d", &cols);

    // HTML-Struktur in die Datei schreiben
    fprintf(file, "<!DOCTYPE html>\n");
    fprintf(file, "<html>\n");
    fprintf(file, "<head>\n");
    fprintf(file, "<title>Hello World - Tabelle</title>\n");
    fprintf(file, "<style>table{border-collapse:collapse;} th, td {padding: 10px; border: 1px solid black;} th {background-color: #f2f2f2;}</style>\n");
    fprintf(file, "</head>\n");
    fprintf(file, "<body>\n");
    fprintf(file, "<h1>Hello World - Tabelle</h1>\n");

    // Start der Tabelle
    fprintf(file, "<table>\n");

    // Kopfzeile der Tabelle (Header-Reihe)
    fprintf(file, "<tr>\n");
    for (int j = 1; j <= cols; j++) {
        fprintf(file, "<th>Header %d</th>\n", j);  // Kopfzeileninhalt für jede Spalte
    }
    fprintf(file, "</tr>\n");

    // Tabelle mit benutzerdefinierten Zeilen und Spalten generieren
    for (int i = 1; i <= rows; i++) {
        fprintf(file, "<tr>\n");
        for (int j = 1; j <= cols; j++) {
            printf("Geben Sie den Inhalt für Zelle %d.%d ein: ", i, j);
            scanf("%s", cellContent);  // Inhalt der Zelle eingeben

            // Zellinhalt in die Datei schreiben
            fprintf(file, "<td>%s</td>\n", cellContent);
        }
        fprintf(file, "</tr>\n");
    }

    // Ende der Tabelle
    fprintf(file, "</table>\n");

    fprintf(file, "</body>\n");
    fprintf(file, "</html>\n");

    // Datei schließen
    fclose(file);

    printf("index.html wurde erfolgreich generiert.\n");

    return 0;
}
