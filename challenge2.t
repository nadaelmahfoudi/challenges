#include <stdio.h>

int main() {
    char voy ;
    printf("veuillez entrez un alphabet " );
    scanf("%c", &voy );
    voy = tolower(voy);
    switch (voy) {
        case 'a':
        case 'o':
        case 'i':
        case 'u':
        case 'e':
        case 'y':
       printf("il s'agit d'une voyelle ");
        break;
        default:
            printf("il ne s'agit pas d'une voyelle \n");
    }

    return 0;
}
