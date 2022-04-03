#include <stdio.h>
#include <stdlib.h>

/** main- function that takes any amount
 *  of argument and prints it to standard output
 *  exit :(EXIT_SUCCESSFUL)
 */
int main(int argc, char *argv[])
{
    int count;
    if (argc > 0)
    {
    	for (count = 0; count < argc; count++)
        {
        	printf("%s\n", argv[count]);
        }
    }
    exit (EXIT_SUCCESS);
}

