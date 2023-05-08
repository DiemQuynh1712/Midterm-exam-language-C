#include <stdio.h>
void choices ()//create a function "choices" that prints all the choices
{
    printf("Please enter one of the following choices:\n");
    printf("C or c) carnivore\tP or p) pianist\n");
    printf("T or t) tree\t\tG or g) game\n");
    printf("Q or q) quit\n");
}
int main()//main function
{
    char choice;//declare choice variable
    choices();//function call
    printf("Please enter letters c, p, t, or g: ");//Print out the sentence prepared to enter the selection
    scanf("%c", &choice);//enter a choice
    while (choice != 'Q' && choice != 'q')//The while loop allows the user to continuously enter choices
                                        //If you choose "q" or "Q" (quit), the loop will terminate
    {
        switch (choice)//switch case for different cases
        {
        case 'C': case 'c':
            printf("Ok. A simple action is a carnivore\n");//print the statement corresponding to the choice
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
        //After printing the answer corresponding to the option that is different from "quit", the program continues while loop
        //and ask the user to choose the choice next
        printf("Please enter letters c, p, t, or g: ");//Print out the sentence prepared to enter the selection
        scanf("%c", &choice);//enter a choice
    }
    return 0;
}