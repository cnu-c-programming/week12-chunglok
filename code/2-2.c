#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[64];
    int score;
} Student;

int main(int argc, const char* argv[]) {
    FILE* fp = fopen("student.txt", "r");
    int count = 0;
    Student students[64];

    while(!feof(fp))
        for(int i = 0; i < sizeof(students)/sizeof(Student); i++){
            fscanf(fp, "%s %d", students[i].name, &students[i].score);
            count++;
        }

    int max = 0;
    float avg = 0;

    for(int i = 0; i < count; i++){
        max = max + students[i].score;
    }
    avg = (float)max / count;

    printf("max: %d\n", max);
    printf("avg: %.2f\n", avg);

    fclose(fp);

    return 0;
}

