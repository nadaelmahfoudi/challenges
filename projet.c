#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int jour;
    int mois;
    int annee;
} deadline;

typedef struct {
    int Id;
    char titre[20];
    char description[100];
    deadline date;
     int status;
} task;

task tache[100];
int id = 0; // Initialisez id à 0 car les indices de tableau commencent par 0

void ajout1() {
    int status;
    printf("Veuillez entrer les données d'une tâche !\n");
    tache[id].Id = id + 1; // Incrémentez l'ID au moment de l'ajout
    printf("donner le titre : ");
    scanf("%s", tache[id].titre);
    printf("donner la description : ");
    scanf("%s", tache[id].description);
    printf("la date limite est :\n");
    printf("donner le jour : ");
    scanf("%d", &tache[id].date.jour);
    printf("donner le mois : ");
    scanf("%d", &tache[id].date.mois);
    printf("donner l'annee : ");
    scanf("%d", &tache[id].date.annee);

         printf("1-tache a realiser\n");
         printf("2-tache en cours de realisation\n");
         printf("3-tache finalisee\n");
         printf("choisissez un status!");
         scanf("%d",&status);
    if (status==1 || status==2 ||status==3 || status==4){
    switch (status){
    case 1:printf("tache a realiser\n");break;
    case 2:printf("tache en cours de realisation\n");break;
    case 3:printf("tache finalisee\n");break;
    case 4:printf("quitter");break;
    default: printf("choix invalide ");break;
    }}
    tache[id].status=status;
    id++;
} int n;
void ajoutplus () {
    printf("Combien de tâches voulez-vous entrer ? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    ajout1();

}
void affichage (){
if (id == 0) {
                    printf("Aucune tâche à afficher pour le moment.\n");
                } else {
                    printf("Liste des tâches :\n");
                    for (int i = 0; i < id; i++) {
                        printf("Tâche %d :\n", tache[i].Id);
                        printf("Titre : %s\n", tache[i].titre);
                        printf("Description : %s\n", tache[i].description);
                        printf("Date limite : %d/%d/%d\n", tache[i].date.jour, tache[i].date.mois, tache[i].date.annee);
                        printf("status: %d\n",tache[i].status);
                    }
                }
}

int main() {
    int choix;

    // Le menu
    do {
        printf("le menu : \n");
        printf("1-Ajouter une nouvelle tache .\n");
        printf("2-Ajouter plusieurs nouvelles taches .\n");
        printf("3-Afficher toutes les taches . \n");
        printf("4-Modification d'une tache . \n");
        printf("5-Supprimer une tache . \n");
        printf("6-Rechercher une tache . \n");
        printf("7-Statistiques.\n");
        printf("8-Quitter. \n");
        printf("choisissez une des options ci dessus !\n");
        scanf("%d", &choix);

        // Choix des options
        switch (choix) {
            case 1://Ajouter une seule tache
                   ajout1();
                break;
            case 2: // Ajouter plusieurs taches
                   ajoutplus ();

                break;
            case 3:// Afficher toutes les taches
                   affichage ();

                break;
            case 8:
                break; // Quitter le programme}
            default:
                printf("Option non valide !\n");
                break;
        }
    } while (choix != 8);

    return 0;
}


