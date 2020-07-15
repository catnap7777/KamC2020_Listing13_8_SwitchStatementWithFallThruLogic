//Listing 13.8 - Another way to use the switch statement - fall through logic; page 317

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int reply;

    while (1)
    {
        fflush(stdin);
        //reply = 0;
        puts("\nEnter a value between 1 and 10, 0 to exit: ");

        //DO NOT FORGET THE "&" WHEN USING SCANF!!!!!!!!
        //
        // Also, weirdness happens if user enters a letter... how to stop that?
        // and/or check for bad user data?
        // Does scanf just ignor data (letter) when it's not of the type that
        // it is expecting???
        // This totally appears to be the case... so, not sure how to fix
        // this so that the user enters an integer as expected... how to test
        // for this condition???

        printf("\nValue of reply before scanf: %d\n",reply);
        scanf("%d",&reply);
        printf("\nValue of reply after scanf: %d\n",reply);

        switch(reply)
        {
            case 0:
                exit(0);
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            {
                puts("You entered 5 or below.\n");
                break;
            }
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            {
                puts("You entered 6 or higher.\n");
                break;
            }
            default:
                puts("Between 1 and 10 please!\n");
        } //end of switch
    } // end of while

    return 0;
}
