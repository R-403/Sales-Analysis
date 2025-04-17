#include <stdio.h>
#include <stdlib.h> 
#include "sales_functions.h"
/***************************************************
 * disclaimer: not needed for main but im not sure
* int main(void)
* brings in the user input and brings in other functions from other classes to be put for printing
* Parameters: void

* Returns:
* none: but it prints the ui
* Sources: none
************************************************/

int main (void) {
    // user inputs
    int decision;
    printf("Which program would you like to run:");
    printf("\n");
    printf("(1) Calculate overall revenue");
    printf("\n");
    printf("(2) Calculate overall profit");
    printf("\n");
    printf("(3) Report on a single item");
    printf("\n");
    scanf("%d", &decision);
    // to see if the user inputs something wrong
    if(decision > 3 || decision < 1) {
        printf("This option is not valid.");
        printf("\n");
        return 1;
    }
    puts("Please enter an input file:");
    char name[100];
    scanf("%s", name);
    FILE *f1 = fopen(name, "r");

    // now print whats good as in take the user input and put what is needed for the rest, output what the user wants
    if(decision == 1) {
        printf("The overall revenue in ");
        printf("%s", name);
        printf(" is ");
        printf("$%.2f",overall_revenue(f1));
        printf(".");
        printf("\n");
    }
    if(decision == 2) {
         printf("The overall profit in ");
        printf("%s", name);
        printf(" is ");

        printf("$%.2f",overall_profit(f1));
        printf(".");
        printf("\n");
    }
    if(decision == 3) {
        int item;
        puts("Which item to analyze?");
        scanf("%d", &item);  
        report_one(f1, item); 
       
    }
    fclose(f1);

}