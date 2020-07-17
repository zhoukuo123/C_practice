#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "abcd";
    char *sp = s;
    puts(strcat(sp + 1, &"ABCD"[1]));
}

