#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;
    
    FILE* fp_src = fopen(argv[1], "r");
    FILE* fp_dst = fopen(argv[2], "w");

    char buffer[100];
    fgets(buffer, 100, fp_src);
    fputs(buffer, fp_dst);
    
    fclose(fp_src);
    fclose(fp_dst);
}

