#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int num;
    bool res;

    printf("Enter a number: "); scanf("%d", &num);

    res = (num % 2 == 0);

    printf("Is %d even? %d (1 yes, 0 not)", num, res);
}