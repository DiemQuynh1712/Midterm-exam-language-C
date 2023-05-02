#include <stdio.h>
void choices ()
{
    printf("Please enter one of the following choices:\n");
    printf("C or c) carnivore\tP or p) pianist\n");
    printf("T or t) tree\t\tG or g) game\n");
    printf("Q or q) quit\n");
}
int main()
{
    char choice;
    choices();
    printf("Please enter letters c, p, t, or g: ");
    scanf("%c", &choice);
    while (choice != 'Q' && choice != 'q')
    {
        switch (choice)
        {
        case 'C': case 'c':
            printf("Ok. A simple action is a carnivore\n");
            break;
        case 'P': case 'p':
            printf("Ok. A simple action is a pianist\n");
            break;
        case 'T': case 't':
            printf("Ok. A simple action is a tree\n");
            break;
        case 'G': case 'g':
            printf("Ok. A simple action is a game\n");
            break;
        }
        printf("Please enter letters c, p, t, or g: ");
        scanf("%c", &choice);
    }
    return 0;
}