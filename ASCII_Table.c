#include <stdio.h>

int main() {
    printf("|  oct  |  dec  |  hex  |  char  |\n");
    printf("+-------+-------+-------+--------+\n");

    for (int i = 32; i <= 127; ++i) {
        printf("|  %3o  |  %3d  |  %2X   |   %c    |\n", i, i, i, i);
    }

    return 0;
}
