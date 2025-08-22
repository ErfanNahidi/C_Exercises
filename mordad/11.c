#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 100000000;
    char *buffer = malloc(n * 12);
    if (!buffer) return 1;

    char *ptr = buffer;
    for (int i = 0; i < n; i++) {
        ptr += sprintf(ptr, "%d\n", i);
    }

    printf("%s", buffer);
    free(buffer);

    return 0;
}
