#include <ctype.h>

#include "func.h"

int main (void)
{
    char option;
    bool ret_val;
    CreateList ();	// Create the list

    while (1)
    {
        printf ("Select: I - Insert D - Delete S - Search P - Print M - Modify E - Empty? Q - Quit:");
        scanf (" %c",&option);
        option = toupper (option);
        if (option == 'Q')
            break;
        switch (option)
        {
            case 'I':
                if ((ret_val = Insert()) == false)
                    printf ("Insert failed\n");
            break;

            case 'M':
                Modify ();
            break;

            case 'D':
                Delete ();
            break;

            case 'S':
                Search ();
            break;

            case 'P':
                Display ();
            break;

            case 'E':
                if (IsListEmpty ())
                    printf ("List is empty\n");
                else
                    printf ("List is not empty\n");
            break;

            default:
                printf ("Invalid option\n");
        }
    }
    return 0;
}