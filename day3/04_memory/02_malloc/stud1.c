#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
};

int main()
{
    struct student *p;     
    int n, i;

    printf("Number of students ? ");
    scanf("%d", &n);
    if (n <= 0) {
        fprintf(stderr, "Error: invalid number of students.\n");
        fprintf(stderr, "program exit.\n");
        exit(1);
    }

    p = (struct student *) malloc(n * sizeof(struct student));
    if (p == NULL) {
        perror("malloc"); 
        exit(2);
    }

    printf("Enter ID and Name for the number of %d students.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d %s\n", &p[i].id, p[i].name);

    printf("\n* Students data (reverse way) *\n");
    for (i = n-1; i >= 0; i--)
        printf("%d %s\n", p[i].id, p[i].name);

    printf("\n");
    exit(0);
}
