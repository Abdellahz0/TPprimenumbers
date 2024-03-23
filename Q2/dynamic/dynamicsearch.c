#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"..\..\Q5\co-prime.h"



// Main search 
int main() {

  int size;
  cell* head=NULL;

  //Q2

  printf("enter the upper bound : ");
  scanf("%d",&size);
  create_prime_list(size-1,&head);
  check_prime(head);
  printprime_list(head);

  //Q3

  index_list(head); 
  display_all_ranges(head);
  perror("error one");
  display_by_range(head);
  perror("error two");

  //Q4

  createprime_prod(head);
  print_primeprod(head);
  
  //Q5
  find_coprime(head);
   

  free_innerlists(head);
  free_list(head);
  return 0;
}

