#include"..\Q2\static\static.h"

void ass_ind(cell* p,cell* q);

cell* nextind(cell* p);

int index_list(cell* head,int* ran);

cell* search_by_range(cell* head,int val); //get the address of a value using the indexed list to reduce the number of iterations

void display_all_ranges(cell* head);

void display_by_range(cell* head,int pos,int ran,int max_ran);

void display_primes_by_range(cell* head,int size); //displays the prime numbers between two values using the indexed list