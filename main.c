#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input [50];
    char positive []={happy , sad , hello} ;
    char reponse [50]={
    I'm glade your happy ;
    i'm sory your sad ;
    Hi!;
    }

    printf(" bot :hello \n: ");
    while (1) {
       printf("you :  ");
       fgets(input, sizeof(input), stdin);
       input[strcspn(input, "\n")] = 0;
       if (strcmp(input, "exit") == 0) {
            printf("Bot: Goodbye!\n");
            break;
        }
        int found = 0;
        for (int i = 0; i < 3; i++) {
            if (strstr(input, positive[i]) != NULL) {
                printf("Bot: %s\n", responses[i]);
                found = 1;
                break;
            }
        }


    }

    return 0;
}
