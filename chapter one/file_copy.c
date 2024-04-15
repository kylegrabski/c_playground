#include <stdio.h>

/* copy target to output; 1st version */
// main()
// {
//     int c;

//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }


/* copy target to output; 2nd version */
main()
{
    int c;

    while((c = getchar()) != EOF)
        putchar(c);
}