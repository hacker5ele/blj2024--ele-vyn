#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define array 20


typedef enum {
    BOOK,
    FILM,
    GAME,
    MUSIC
} TmediaType;

typedef struct {
    TmediaType type;
    char title[50+1];
    char author[50+1];
    int  publishedYear;
} TMedia;


int main(void) {

    // Allocate memory for the media library (20 items)
    TMedia *library = malloc(array * sizeof(TMedia));
    if (library == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    library[0].type = BOOK;
    library[0].publishedYear = 2005;
    strcpy(library[0].title, "Harry Potter and the Goblet of Fire");
    strcpy(library[0].author, "J.K Rowling");


    library[0] = {"Book, Harry Potter and the Goblet of Fire, J.K Rowling, 2005"};
    library[1] = {"Film, Jurassic World Dominion, Colin Trevorrow, 2022"};


    return 0;
}
