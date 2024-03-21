#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"static.h"
// Main Function
int main() {
  int size;
  printf("enter the upper bound : ");
  scanf("%d",&size);
  prime* Array;
  createprime_array(&Array,size);
  check_prime(Array,size);
  print_prime(Array,size);
  free(Array);
  return 0;
}


