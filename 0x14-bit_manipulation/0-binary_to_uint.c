#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result = (result << 1) + (b[i] - '0');
    }

    return result;
}

int main() {
    const char *binary = "101010";
    unsigned int decimal = binary_to_uint(binary);
    printf("Decimal: %u\n", decimal);

    return 0;
}

