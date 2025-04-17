#include <stdio.h>
#include "sales_functions.h"
#include <stdlib.h> 

/***************************************************
* float overall_revenue(FILE *f1)
* is where the overall revenue is being calculated based on user input
* Parameters: FILE *f1

* Returns:
* it returns the numbers of calculated overall revenue
* Sources: none
************************************************/
float overall_revenue(FILE *f1) {
    //declare variables
float overallr = 0;
int code;
int sold;
float menu;
float purchase;
    
while(fscanf(f1, "%d %d %f %f", &code, &sold, &menu, &purchase) == 4) {
    overallr += sold * menu;
}
return overallr;
}
/***************************************************
* float overall_profit(FILE *f1)
* is where the overall profit is being calculated based on user input
* Parameters: FILE *f1

* Returns:
* it returns the numbers of calculated overall profit
* Sources: none
************************************************/

float overall_profit(FILE *f1) {
    //declare variables
float overallp = 0;
int code;
int sold;
float menu;
float purchase;
//loop through to make the math happen
    while(fscanf(f1, "%d %d %f %f", &code, &sold, &menu, &purchase) == 4) {
        overallp += sold * (menu - purchase);
        
}
return overallp;   
}

/***************************************************
* void report_one(FILE *f1, int item)
* is where the overall profit and revenue are printed here and organizes the print statements for the ui
* Parameters: FILE *f1
* int item

* Returns:
returns nothing but:
* it prints the report of the money making such as profits and revenue
* Sources: none
************************************************/

void report_one(FILE *f1, int item) {
    //declare variables
float overallr = 0;
float overallp = 0;
int code = 0;
int sold = 0;
float menu;
float purchase;
int totals = 0;
//loop to make the math happen and then give out that report
   while(fscanf(f1, "%d %d %f %f", &code, &sold, &menu, &purchase) == 4) {
        if(code == item){
        overallr += sold* menu;
         overallp += sold * (menu - purchase);
        totals += sold;
        }

}
        printf("Item ");
        printf("%d", item);
        printf(" sold ");
        printf("%d", totals);
        printf(" times with a revenue of $");
        printf("%.2f", overallr);
        printf(" and a profit of $");
        printf("%.2f", overallp);
        printf(".\n");


}