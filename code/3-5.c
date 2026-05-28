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
    while(fscanf(fp, "%s", &err) == 1){
        if(sscanf(err, "%d", &num) == 1)
            sum += num;
        else
            fprintf(stderr, "invalid input %s\n", err);
            
    }

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
