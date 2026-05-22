#include <stdio.h>

int main(int argc, const char* argv[], const char* envp[]) {
    char e = envp[0];

    while(*envp != NULL) {
        printf("%s\n", e);
        e++;
    }
    return 0;
}
