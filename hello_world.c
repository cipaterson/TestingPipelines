#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc > 1) {
        if (!strcmp(argv[1], "PASS")) {
            printf("PASS\n");
            return 0;
        } else if (!strcmp(argv[1], "FAIL")) {
            printf("FAILED\n");
            return 1;
        } else {
            printf("%s: Error: Unknown input: %s\n", argv[0], argv[1]);
            return 2;
        }
    } else {
        printf("%s: Hello World!\n", argv[0]);
        return 0;
    }
} 