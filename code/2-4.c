#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");

    int alphabet;
    int count[26] = {0};
    while(!feof(fp)){
        fscanf(fp, "%c", &alphabet);
        for(int i = 'a'; i <= 'z'; i++){
            for(int j = 0; j < 26; j++){
                if(alphabet == i)
                    count[j]++;
                    fprintf("%c: %d\n", alphabet, count[j]);
            }
        }
    }

    fclose(fp);
}

