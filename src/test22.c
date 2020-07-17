#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *p = (char *) 0xB800;

    *p = 'a';

    return EXIT_SUCCESS;
}
