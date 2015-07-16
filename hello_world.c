/* say hello to the repo */

#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#define LEN 50

int main(int argc, char *argv[]) {
    int i;

    printf("Hello GitHub!\n");

    srand(time(NULL));
    int meowLength = rand() % LEN + 1;
    printf("Octocat says me");
    for (i = 0; i < meowLength; i++) {
        printf("%s", (i == meowLength - 1 ? "oww!\n" : "o"));
    }

    return 0;
}
