/* say hello to the repo */

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#define LEN 50
/* color definitions */
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(int argc, char *argv[]) {
    int i;
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Hello GitHub!\n");

    srand(time(NULL));
    int meowLength = rand() % LEN + 1;
    /* cool didn't know you can concat strings like this */
    printf(ANSI_COLOR_CYAN "Octocat says me");
    for (i = 0; i < meowLength; i++) {
        printf("%s", (i == meowLength - 1 ? "oww!\n" : "o"));
        if (i % 2 == 0)
            printf(ANSI_COLOR_YELLOW);
        else
            printf(ANSI_COLOR_CYAN);

    }
    
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");
    
    return 0;
}
