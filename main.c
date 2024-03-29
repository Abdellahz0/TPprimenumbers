#include"Display_and_menu\menu.h"


int main() {
  home_page(); //display ESI logo          
  loading_page(); //simple loading animation
  cell* head=main_menu(); //after the completeing the program we need the lists head to free all the cells and nodes
  //the allocated array for Q2 static implementation has been already cleared from the memory inside the menu
  free_innerlists(head); //free all inner-lists
  free_list(head); //free the global list
  return 0;
}