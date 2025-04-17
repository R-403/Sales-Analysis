/***************************************************
 * sales_functions.h
* is where the bridge is made to bridge btween sales_function.c and analyze_sales.c
* Returns:
* none cause its just calling the functions together and methods
* Sources: none
************************************************/
//bridge between the two sales functions and analyze files
//packages here
#include <stdio.h>
#include <stdlib.h> 
#ifndef SALES_FUNCTIONS_H
#define SALES_FUNCTIONS_H
//functions here
float overall_revenue(FILE *f1);
float overall_profit(FILE *f1);
//the third and final method
void report_one(FILE *f1, int item);
//to end it 
#endif