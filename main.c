#include"Display_and_menu\menu.h"


int main() {
  home_page();           
  loading_page();
  cell* head=main_menu();
  free_innerlists(head);
  free_list(head);
  return 0;
}