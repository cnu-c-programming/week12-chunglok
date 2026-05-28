#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }
    
    int sum = 0;
    int num;
    char err[64];
    while(!feof(fp)){
        fscanf(fp, "%d", &num);
        fscanf(fp, "%s", &err);
        sum += num;
        if(err[0] < '0' || err[0] > '9')
            fprintf(stderr, "invalid input %s\n", err);
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
