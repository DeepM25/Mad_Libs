#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    
    
    char noun[20] = "";
    char verb[20] = "";
    char adjective1[20] = "";
    char adjective2[20] = "";
    printf("Enter a noun: ");
    fgets(noun,20,stdin);
    noun[(strlen(noun))-1] = '\0';
    printf("Enter a verb: ");
    fgets(verb,20,stdin);
    verb[(strlen(verb))-1] = '\0';
    printf("Enter first adjective: ");
    fgets(adjective1,20,stdin);
    adjective1[(strlen(adjective1))-1] = '\0';
    printf("Enter second adjective: ");
    fgets(adjective2,20,stdin);
    adjective2[(strlen(adjective2))-1] = '\0'; 
    printf("---------------------------------\n");
    printf("Beneath the %s skies, the %s wandered far,\n", adjective1, noun);
    printf("Its heart a %s flame, chasing an unseen star,\n", adjective2);
    printf("It would be %s through shadows, through whispers, through rain,\n", verb);
    printf("Hoping the world might call its wild soul again.\n");
    printf("---------------------------------\n");
    return 0;

    


}
