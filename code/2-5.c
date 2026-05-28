#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;
    FILE* fp_src = fopen(argv[1], "r");
    FILE* fp_dst = fopen(argv[2], "w");

    fscanf(fp_src, "%s", argv[1]);
    fprintf(fp_dst, "%s", argv[1]);
    
    fclose(fp_src);
    fclose(fp_dst);

}

