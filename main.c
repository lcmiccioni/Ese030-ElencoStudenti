#include <stdio.h>
#include <stdlib.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente {
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    int eta;
    char classe[MAX_STRLEN];
};

struct s_studente studente[N];

int main(int argc, char** argv) {
    int i;
    
    for(i=0;i<N;i++) {
        printf("Inserisci il nome dell' alunno numero %d: ", i);
        scanf("%s", &(studente[i].nome));
        printf("Inserisci il cognome dell' alunno numero %d: ", i);
        scanf("%s", &(studente[i].cognome));
        printf("Inserisci l'eta' dell' alunno numero %d: ", i);
        scanf("%d", &(studente[i].eta));
        printf("Inserisci la classe dell' alunno numero %d: ", i);
        scanf("%s", &(studente[i].classe));
    }
    for(i=0;i<N;i++) {
        printf("\n%s, %s, %d, %s", studente[i].nome, studente[i].cognome, studente[i].eta, studente[i].classe);
    }
    
    return (EXIT_SUCCESS);
}

