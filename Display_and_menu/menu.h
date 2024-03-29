#include<stdbool.h>
#include"..\Q5\co-prime.h"


void home_page(); //displays ESI logo

void loading_page(); //displays a simple loading animation

void hold_results(); //to let the user see the results before clearing the terminal

cell* main_menu(); //the menu where the user manipulates the differente questions in the TP

int sub_menu_1(cell** head,bool* decision); //a sub-menu for the question 2

void sub_menu_2(cell* head,int range,int max_ran); //a sub-menu for the question 3

void sub_menu_3(cell* head,int size); //a sub-menu for the question 4

void sub_menu_4(cell* head,int size); //a sub-menu for the question 5