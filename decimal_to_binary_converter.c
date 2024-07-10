#include <stdio.h>

int main(){

    printf("Write the number to be converted: ");
    int num_dig;
    scanf("%d", &num_dig);
    int num_div = num_dig;
    int quotient;
    int rest;

    while (quotient != 0)
    {
        quotient = num_div / 2;
        rest = num_div % 2;
        printf("%d", rest);
        num_div = quotient;
    }
  
    printf("\nRead backwards (from last to first): \n");

    return 0;
}