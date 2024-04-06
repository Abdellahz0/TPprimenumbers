#include<stdio.h>
#include<stdbool.h>
#include"Q1library.h"



bool is_prime(int x,int* iter){
    for (int i = 2; i <= x/2; i++)
    {
        if (x%i==0)
        {
            return false;
        }
      (*iter)++;
    }
    return true;
}

void display_prime(int n,int *iter1) {
  int i=2;
  while (i<=n) {
    if (is_prime(i,&(*iter1))) {
      printf("%4d |",i);
    }
    i++;
    (*iter1)++;
  }
  printf("\n");
}
