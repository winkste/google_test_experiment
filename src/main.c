#include <stdio.h>
#include "file2.h"
#include "file1.h"
#include "file3.h"
#include "file4.h"

int main() {
    // Call functions from file1.c
    printf("Function1 result: %d\n", Function1());
    printf("Function2 result: %d\n", Function2());

    // Call functions from file2.c
    printf("Function3 result: %d\n", Function3());
    printf("Function4 result: %d\n", Function4());

    // Call functions from file3.c
    printf("Function5 result: %d\n", Function5());
    printf("Function6 result: %d\n", Function6());

    // Call functions from file4.c
    printf("Function7 result: %d\n", Function7());
    printf("Function8 result: %d\n", Function8());

    return 0;
}
