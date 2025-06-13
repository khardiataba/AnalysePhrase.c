
#include <ctype.h> // Pour la fonction tolower()

int main() {
    // Déclaration des variables
    int longueur = 0;
    int nbMots = 0;
    int nbVoyelles = 0;
    char caractere;
    int dansMot = 0;

    printf("Entrez une phrase qui se termine par un point (ex : Bonjour tout le monde.) :\n");

    // Lecture caractère par caractère jusqu'au point final
    do {
        caractere = getchar();

        if (caractere != '.') {
            longueur++;

            // Vérification des voyelles (minuscule/majuscule)
            char min = tolower(caractere);
            if (min == 'a' || min == 'e' || min == 'i' ||
                min == 'o' || min == 'u' || min == 'y') {
                nbVoyelles++;
            }

            // Détection de mot
            if (caractere != ' ' && caractere != '\n') {
                if (!dansMot) {
                    nbMots++;
                    dansMot = 1;
                }
            } else {
                dansMot = 0;
            }
        }
    } while (caractere != '.');

    // Affichage des résultats
    printf("\n--- Resultats ---\n");
    printf("Longueur de la phrase : %d caracteres\n", longueur);
    printf("Nombre de mots        : %d\n", nbMots);
    printf("Nombre de voyelles    : %d\n", nbVoyelles);

    return 0;
}
