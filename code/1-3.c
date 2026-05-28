#include <stdio.h>

int main(int argc, const char* argv[], const char* envp[]) {
    const char** e = envp;

    while(*e != NULL) {
        printf("%s\n",*e);
        e++;
    }
    return 0;
}
