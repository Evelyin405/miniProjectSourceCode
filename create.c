#include <stdio.h>
#include <stdlib.h>

struct clientData {
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main() {
    FILE *fPtr;
    struct clientData blank = {0, "", "", 0.0};
    
    fPtr = fopen("credit.dat", "wb");
    
    for (int i = 0; i < 100; i++) {
        fwrite(&blank, sizeof(struct clientData), 1, fPtr);
    }
    
    fclose(fPtr);
    printf("credit.dat created successfully!\n");
}